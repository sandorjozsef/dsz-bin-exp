#include <stdio.h>
#include <string.h>

struct authentication {
	char user_pwd[8];	
	char correct_pwd[8];
};

int check_authentication(authentication user_info) {

	// additional steps...	
	int compare_result = strcmp(user_info.correct_pwd, user_info.user_pwd);
	return compare_result == 0 ? 1 : 0;
}

int authenticate(char* pwd) {

	const char* correct_password = "secret";
	authentication user_info;
	
	strcpy(user_info.correct_pwd, correct_password);
	strcpy(user_info.user_pwd, pwd);

	user_info.correct_pwd[7] = '\0';
	user_info.user_pwd[7] = '\0';
	
	// return check_authentication(user_info); // for task 2.
	return 0; // for task 3.
}

int main(int argc, char* argv[]) {
	
	if (argc != 3) {
		printf("Please provide 2 parameters: the username and the password!\n");
		return -1;
	}

	char username[8];
	int is_authenticated_user = 0;

	getchar();

	// process username
	strcpy(username, argv[1]);

	// authenticate user
	// is_authenticated_user = authenticate(argv[2]); // for task 2. and 3.
	
	
	if (is_authenticated_user) {
		puts("Access Granted!\n");	
		return 0;
	} else {
		puts("Access Denied!\n");	
		return -1;
	}
}
