Action()
{
	int i;
	
	lr_start_transaction("UC5_CancelFlight");
	
	
	lr_save_string(lr_eval_string("{login}"),"lg");
	lr_save_string(lr_eval_string("{password}"),"psw");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("Priority", 
		"u=1");

	web_custom_request("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);
	
	
	
	
	
	lr_start_transaction("go_Welcome_Page");
	
	
	
	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);
	
	web_reg_find("Text=Welcome to the Web Tours site",LAST);

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Priority", 
		"u=4");

/*Correlation comment - Do not change!  Original value='139099.175698663HVftQVDpiftcQcQptiDV' Name ='userSession_1' Type ='RecordReplay'*/
	web_reg_save_param_attrib(
		"ParamName=userSession_1",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		LAST);

	web_custom_request("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t15.inf", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1717174630127\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive0*/
	
	web_add_auto_header("Priority", 
		"u=4");

	lr_end_transaction("go_Welcome_Page",LR_AUTO);
	
	
	
	
	
	lr_start_transaction("login");
	
	web_reg_find("Text=User password was correct",LAST);
	
	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(19);

	web_custom_request("login.pl",
		"URL=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t16.inf",
		"Mode=HTTP",
		"Body=userSession={userSession_1}&username={lg}&password={psw}&login.x=44&login.y=6&JSFormSubmit=off",
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t19.inf", 
		LAST);

	web_custom_request("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t20.inf", 
		LAST);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t21.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t22.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("login",LR_AUTO);
	
	
	
	
	lr_start_transaction("go_Itinerary");
	
	web_reg_find("Text=Itinerary",LAST);
	
	web_custom_request("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);
	//<input type="hidden" name="flightID" value="14098-820-JM"  />

 	web_reg_save_param("c_flightids",
	   "lb=<input type=\"hidden\" name=\"flightID\" value=\"", "rb=\"  />",
	   "ord=all",
	   	LAST);

	//<input type="hidden" name=".cgifields" value="6"  />

 	web_reg_save_param("c_cgifields",
	   "lb=<input type=\"hidden\" name=\".cgifields\" value=\"",
	   "rb=\"  />",
	   "ord=all",
	   	LAST);
	
	web_custom_request("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("cancelreservation.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t26.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t27.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("go_Itinerary",LR_AUTO);
	

	
	
	
	lr_start_transaction("cancel_flight");
	
	web_concurrent_start(NULL);

	web_custom_request("in_itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t28.inf", 
		LAST);

	web_custom_request("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t29.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(11);

	//This code selects what itinerary to cancel.
    //In this case it is the last one that was just created

    lr_param_sprintf("c_buffer", "%s=on&", "1");

    lr_save_string("", "cgi_buffer");

    //This code builds the values for flight id and cgi fields

    for (i=1; i<=atoi(lr_eval_string("{c_flightids_count}")); i++)
    {
        lr_param_sprintf("c_buffer",
        "%sflightID=%s&",
        lr_eval_string("{c_buffer}"),
        lr_paramarr_idx("c_flightids",
        i));

        lr_param_sprintf("cgi_buffer",
        "%s&.cgifields=%s",
        lr_eval_string("{cgi_buffer}"),
        lr_paramarr_idx("c_cgifields",
        i));
    }

    //This line adds the suffix to the end of the request
    //and saves it as the c_wcr parameter

    lr_save_string(lr_eval_string("{c_buffer}removeFlights.x=36&removeFlights.y=4{cgi_buffer}"), "c_wcr");
    lr_output_message(lr_eval_string("{c_wcr}"));
    
   	web_custom_request("itinerary.pl_2", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		"Body={c_wcr}", 
		LAST);

	web_reg_find("Fail=Found",
		"Text={c_flightids_1}",
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

    lr_end_transaction("cancel_flight",LR_AUTO);
    
    
    
    lr_end_transaction("UC5_CancelFlight", LR_AUTO);

    
	return 0;
}