//Automatically generated file for implementing asynchronous callback functions.
//You can modify the automatically generated callback implementations or add new ones.
//Asynchronous callback functions can be registered using web_reg_async_attributes steps.
int Poll_0_RequestCB()
{
	//Enter your implementation for RequestCB() here.

	//Call web_util_set_request_url() here to modify polling URL.
	//URL is expected to be of the form:
	//https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7b%7d&last_modified={Unknown_Poll_0_0}&force_custom_thread=true&supported_custom_metathreads=%5b%22tomyself%22%5d&offset=0&email=nagrtest%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f%3a6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_={TimeStamp_Poll_0_1}

	//The following parameters must be assigned:

	//TODO - Implement parameter of unknown type: Unknown_Poll_0_0.
	//Known examples for Unknown_Poll_0_0: last_modified=1639737387, last_modified=1639737391, last_modified=1639737391, 
	lr_save_string("1639737387","Unknown_Poll_0_0");

	web_save_timestamp_param("TimeStamp_Poll_0_1",LAST);

	//Once all parameters have been assigned, copy them to the updated URL.
	//Then call web_util_set_request_url() with the updated URL:
	web_util_set_request_url("https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7b%7d&last_modified={Unknown_Poll_0_0}&force_custom_thread=true&supported_custom_metathreads=%5b%22tomyself%22%5d&offset=0&email=nagrtest%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f%3a6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_={TimeStamp_Poll_0_1}");

	//Call web_util_set_request_body() here to modify request body:
	//web_util_set_request_body("<request body>");

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_0_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	//Enter your implementation for ResponseCB() here.

	//TODO - To make the script wait for a specific response, use web_sync in the relevant Action file.
	//See the Modifying Callbacks section in the VuGen user guide for more details.

	return WEB_ASYNC_CB_RC_OK;
}

