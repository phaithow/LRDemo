vuser_init()
{

	web_custom_request("web_custom_request",
		"URL=http://10.41.37.191:8080/#/",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	
	return 0;
}
