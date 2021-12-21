RosbankFilials()
{
	lr_start_transaction("_UC01_Росбанк");
	
	lr_start_transaction("UC01_01_Главная_страница");
	
	/*Открытие главной страницы*/
	
	web_reg_find("Text=menu_kreditnye-karty",
		LAST);
	
	web_url("www.rosbank.ru",
		"URL=https://www.rosbank.ru/",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t2.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=https://eu-tlp04.kameleoon.eu/visit.gif?lp=4&spt=1639646933468&p=c2l0ZUNvZGU9ZXVubmE3MGZleiZ2aXNpdG9yQ29kZT0wbWZzMnNqa2Uyd2hzM3MzJnN0YXJ0T2ZWaXNpdD1mYWxzZSZzY3JpcHRWZXJzaW9uPTIwMTkwMTE1Jm5vbmNlPTRFOUQ0OTE2MkYxQjdGNDgmZXZlbnRUeXBlPXBhZ2UmdGltZT0xNjM5NjQ4Nzg3Nzg4JmhyZWY9aHR0cHMlM0ElMkYlMkZ3d3cucm9zYmFuay5ydSUyRiZ0aXRsZT0lRDAlQTAlRDAlOUUlRDAlQTElRDAlOTElRDAlOTAlRDAlOUQlRDAlOUElMjAtJTIwJUQwJUIxJUQwJUIwJUQwJUJEJUQwJUJBJUQwJUJFJUQwJUIyJUQxJTgxJUQwJUJBJUQwJUI4JUQwJUI1JTIwJUQxJTgzJUQxJTgxJUQwJUJCJUQxJTgzJUQwJUIzJUQwJUI4JTIwJUQwJUI0JUQwJUJCJUQxJThGJTIwJUQxJTg0JUQwJUI4JUQwJUI3JUQwJUI4JUQxJTg3JUQwJUI1JUQxJTgxJUQwJUJBJUQwJUI4JUQxJTg1JTIwJUQwJUJCJUQwJUI4JUQxJTg2JTIwJUQwJUI4JTIwJUQwJUIxJUQwJUI4JUQwJUI3JUQwJUJEJUQwJUI1JUQxJTgxJUQwJUIwJTIwJTdDJTIwJUQwJUJFJUQxJTg0JUQwJUI4JUQxJTg2JUQwJUI4JUQwJUIwJUQwJUJCJUQxJThDJUQwJUJEJUQxJThCJUQwJUI5JTIwJUQxJTgxJUQwJUIwJUQwJUI5JUQxJTgyJTIwJUQwJUIxJUQwJUIwJUQwJUJEJUQwJUJBJUQwJUIwJmtleVBhZ2VzPSU1Qm51bGwlNUQmcmVmZXJyZXJzPSU1Qm51bGwlNUQ%3D",ENDITEM,
		LAST);
	
	

	lr_end_transaction("UC01_01_Главная_страница",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("UC01_02_Отделения");
	/*Переход на станицу с отделениями банка*/
		
		web_reg_save_param(
		"otdelenye",
		"LB=\"id\":\"",
		"RB=\",\"is_not_auto_update\"",
		"Ord=ALL",
		LAST);
	
	
	web_url("otdeleniya", 
		"URL=https://www.rosbank.ru/otdeleniya/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ad.adriver.ru/cgi-bin/erle.cgi?sid=223500&bt=62&custom=206%3DDSPCounter&ph=0&rnd=832159&tail256=unknown", ENDITEM, 
		LAST);
		
	/*выбор случайного отделения из списка всех отделений*/
	lr_save_string(lr_paramarr_random("otdelenye"),"otd");

	lr_end_transaction("UC01_02_Отделения",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC01_03_Выбор_отделения");
	
	/*Переход на страницу случайного отделения*/
	
	web_reg_find("Text=WorkingHoursItem",
        LAST );
	
	web_url("{otd}", 
		"URL=https://www.rosbank.ru/otdeleniya/{otd}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ad.adriver.ru/cgi-bin/erle.cgi?sid=223500&bt=62&custom=206%3DDSPCounter&ph=0&rnd=692054&tail256=unknown", ENDITEM, 
		LAST);
	
	lr_end_transaction("UC01_03_Выбор_отделения",LR_AUTO);
	
	lr_end_transaction("_UC01_Росбанк",LR_AUTO);
	
	return 0;
}
