Action()
{	
	lr_start_transaction("0_MAIL");


	web_set_sockets_option("SSL_VERSION", "TLS1.2");

  	web_set_max_html_param_len("14910");
  	
	lr_start_transaction("UC_01_SaveToken");

	
	web_reg_save_param("token0",
		"LB/IC=act=",
		"RB/IC=;",
		"Ord=all",
		LAST);


	web_url("mail.ru", 
		"URL=https://mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		EXTRARES, 
		"Url=/re/i/sprite-b611df27.svg", ENDITEM, 
		"Url=/res/"
		"11c41524b1f0408530700000007065750510f0c0752540200540b5200010554570750075b04020c55065d0408035b5651545c09575251070654005704010351540306020905000903020a010f035a5604510c095c52530200540a5207010d51560601020e00010c010200010106575306540a09575251070654005704010351540306020905000903020a010f035a5604510c095c52530200540a5207010d51560601020e00010c010200010106575306540a09575251070654005704010351540306020905000903020a010f035a5604510c095c52530200540a5207010d51560601020e00010c010200010106575306540a09575d3c0f0352075"
		"207010759570103020b", ENDITEM, 
		"Url=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=33772932,703055&_=1640542212563", ENDITEM, 
		"Url=https://top-fwz1.mail.ru/js/code.js", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAYSSsRRhAAAAkmN6i_dgNW0IsqNMh8ZvSTb4BsP3k5P0VhfFCCVJGJw6j8opyXxe3mtrrWSFYm0ESSWa7IfQTGseV3oi-IviZVWNGw37aFjX2CktaJ7lkcUkpyMXQiTxJWnLMI4wQFfav-4LH-q-8ZjANNc_RkAozw.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAR52e39hAAAAY1oe0y9XQvi9tUwu-7nYyohWKpFsyQzs_G8ISTZ_COMjCwe9KcChiZCo8mLbjYT1RRmTf2_EzVgkPOAma-tam1tw-5mvsjpRhkaVB62rhxRHEbNGnUCRSYReaA0Sq1Ny9FNafRiBylMVuYnspDtWGw.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYDBd2xMaAAAAPf1Hk3DCy0tHHdisWcVNuPSyz0mjfX6CDwi7Dbsmu44.gif?_=1639855067045", ENDITEM, 
		"Url=https://rs.mail.ru/d1797086.gif?sz=15&_=1640379214335", ENDITEM, 
		"Url=https://rs.mail.ru/d79643050.gif?sz=15&_=1640018409720", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYF7OcggaAAAAzDWfblVd6S_4O5M1mbkgQjgylllGWBXIGslRTZTSZ0I.gif?_=1640612840467", ENDITEM, 
		"Url=https://rs.mail.ru/d69886148.gif?sz=15&_=1640404172612", ENDITEM, 
		"Url=https://rs.mail.ru/d90847282.gif?sz=15&_=1639893794462", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYHDZJXQaAAAAKMsPN1Av51AEDSxYZmB4KBhSUe19beiigZanCXJFW80.gif?_=1640443098302", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYPTngGMaAAAAyqyhwkxmPw8v5uISvRf9OXyqPFOna47FAuBKUKFiTzg.gif?_=1640378280307", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYJpGnwIaAAAAzarT9ZYFyIgOJ_TOxgwQ_KHtEkBqAIaNk8FLkseHMMc.gif?_=1640369355194", ENDITEM, 
		"Url=https://trk.mail.ru/i/pllim0?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYE7bohsaAAAAO2dHW-8GE2HGdXVQ8W8ciflqQJ_5ZKIX4zzs0P-T0nw.gif?_=1640078929657", ENDITEM, 
		"Url=https://rs.mail.ru/sb36299732.gif?sz=15&_=1640563923824", ENDITEM, 
		"Url=https://trk.mail.ru/i/z1q4a7?mt_campaign=mainvkmail&mt_adset=&mt_network=1&mt_sub1=mail.ru", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYPO2twAaAAAA2T-ifid3F3sNrJXVqfAKKi_hJbQw5aRN6N5aqJ21ZZk.gif?_=1640367443428", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYE6L3UkaAAAAE1r9ma-nMqyf1i_QJGPzg2lHDitso7MHoXDpb9N4VbE.gif?_=1640626770568", ENDITEM, 
		"Url=https://rs.mail.ru/d83288630.gif?sz=15&_=1640535528268", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYFI8zQQaAAAAauxqH_QlHO9eFy66fFl0grDYRmg1wqHaWzKme8zCwBU.gif?_=1640117375931", ENDITEM, 
		"Url=https://static.pulse.mail.ru/pulse-lenta-1.159.0.js", ENDITEM, 
		"Url=https://rs.mail.ru/d67755945.gif?sz=15&_=1640690593573", ENDITEM, 
		"Url=https://trk.mail.ru/i/v6h9q7?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://trk.mail.ru/i/y7s979?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://trk.mail.ru/i/ds8xq6?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://rs.mail.ru/d77213059.gif?sz=15&_=1640189766756", ENDITEM, 
		"Url=https://trk.mail.ru/i/efn5v4?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://trk.mail.ru/i/curxh8?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://trk.mail.ru/i/pqaft6?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://bar.love.mail.ru/jsonp/bar?&_=1640291844095", ENDITEM, 
		"Url=https://trk.mail.ru/i/koydy6?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://trk.mail.ru/i/k9iu14?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://trk.mail.ru/i/hf90m3?_=1640162289091", ENDITEM, 
		"Url=https://trk.mail.ru/i/ac5sf6?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://xray.mail.ru/update?p=resplash&t=has-account&v=1&i=auth_false:1,mail_false:1", ENDITEM, 
		"Url=https://trk.mail.ru/i/h0c140?mt_sub1=mail.ru", ENDITEM, 
		"Url=https://r3.mail.ru/k?fver=0&mh=81e4121baf7286eca0b199916eff4bfd&js=1", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYLAtziwaAAAASx2JiN3VYwPVH6hw691vsRuqlmxn0ql52xFJmlhwBzM.gif?_=1639884217578", ENDITEM, 
		"Url=https://xray.mail.ru/update?p=resplash&t=blocks&v=1&_=1639995997252", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYEWo-EkaAAAAUUvR6X-7IXue1jj_8TEzim3Txt3SgHHnaUz4Am9AqKY.gif?_=1639925905897", ENDITEM, 
		"Url=https://rs.mail.ru/ns.gif?n=365393310,365392588,365385966,365386437,365389275,365393602,365389590,365376716,365367167,365387622,365390717&_=1639828776708", ENDITEM, 
		"Url=https://rs.mail.ru/d44643181.gif?sz=15&_=1639888377712", ENDITEM, 
		"Url=https://rs.mail.ru/d27780713.gif?sz=15&_=1639827652944", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYIKF9UAdAAAAMAyVbNg1C5_CPsLj6UDjmegkJpeO4HqnwCm3J3-DDXU.gif?_=1639943442278", ENDITEM, 
		"Url=https://rs.mail.ru/d660352.gif?sz=15&_=1640396838892", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYKiB0WUaAAAA8hxvDih_2qNsezbK359LDusO34KdIIY5UnvmZW6aDWU.gif?_=1639843041548", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gELZkj28QzqnjRrVmZapYKMFjTLe5c-uxvUYtw3fem9oIYH35VXS2BY2pbJKWywg_Q5iyd1HomB09GaRDGn7WDqjBFM8acbIk0JH-i3neReDCwHLvzUoIWP4X6lDIzUd19YazHKhwItwqbJ3EtzBxERcRlq2leCpwq--cRhspgXYHBbkhwkAAAA-oF141DIxHbbaZpwm_2R8SXj8elgSMxTPFm7bn9BS6LYcUcdSVDYDEwJ6zW3Nhde.gif?_=1640194998210", ENDITEM, 
		"Url=https://rs.mail.ru/ns.gif?n=360866022,360866021,362894341,360866036,361700283,360866045,360866006,360866032,360866010,360866029,360866019,364244819&_=1640331848187", ENDITEM, 
		"Url=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=61944424,61021866,61021863,61021862,61021861,61021860,61021859,61021858,61021857,90824763,61021856,61021854&_=1640438199500", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_sG3enx8AAAAXYd3zvhIqACDiLBK-z63ckhGhJGgkv_rJGHWNwxdUt1RPzbamiYVzVpUiTfzyT4DMQKf1vmf3CsR1iaRlYFQNMC2jA6pBmRgyff17qoDjloLDTrH-XAe3gEhkWt8jkKBqFPuxqboYrhJAompV52iuClU8K7skfJ7a-3LCUTEZdQ.gif", ENDITEM, 
		"Url=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=33772943,703057,523187&_=1640101886214", ENDITEM, 
		"Url=https://recostream.go.mail.ru/?stream_id=lenta_main_mail_ru&with_profile=1&query_type=settings&_rand=us2xpvhf60s", ENDITEM, 
		"Url=https://rs.mail.ru/d69888407.gif?sz=15&rnd=161371210&ts=1639737319&sz=15", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_jCDH0J8AAAAUoN6GOYJqYZqZiJOjyPctINX7fnGQ9YFyIJk57UE79O26ljUfhCZ3vV2Zubw62-fF4UA9tyLTL1xNX-mvECid4Z3tTd8h4rc8VITqI7gXWzpDqkwLWn6fQA5nk1anbabTYHAY3QLAtsnzHvC_IVce3oN4J1fgskMNkt-rRX5FGU.gif", ENDITEM, 
		"Url=https://rs.mail.ru/d75990254.gif?sz=15&_=1640664957384", ENDITEM, 
		"Url=https://rs.mail.ru/d66539295.gif?sz=15&_=1640434491267", ENDITEM, 
		"Url=https://rs.mail.ru/d66539296.gif?sz=15&_=1640196076010", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAQVAqmFkAAAAkjhVKt9zzZHL5Bh55lyDFvNu6AcCobbmx_D0A_jzSROGVhxeO_pFBIqYQCaqlTWeVdF1dE6qLD1p9zog0q0XiaPMMd-FmVHEYl2-nqt_aQ_yvhRxaDWfaLvhZhXtwsJcDLaeyet0YUtSQsziRqgULg.gif", ENDITEM, 
		"Url=https://rs.mail.ru/d69887902.gif?sz=15&_=1640004327920", ENDITEM, 
		"Url=https://rs.mail.ru/d66539288.gif?sz=15&_=1640344449208", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAASEJo2tkAAAAB76F9bZ6FGn95DBmb4fiKFlq9L7bndZIxvI-1kSUy1f1DICjUawucKAw9cQdTAc3LJ5jcspN3bthFJxB9AVTQnkqrzRBJF16evfJM9XMEyUcm7Haz02C650wHALK_kYXrAr5ORc2GAR2NTyX0-Yb3Q.gif", ENDITEM, 
		"Url=https://an.mail.ru/count/W8aejI_z8A45101q1dln9C8s4cPr1G2X0122836NTjLH0000062O2t3qz82G29010i010jW1YeSTw0600V02ZBgIiWQm0mAxFX5hjHTD1Qa7XgwDHmtt2axG1mBO5S6AzkoZZxpyOu4Ny3_u680PwHo07Ny704GWU2Y2NGh6MOWAOlZdoPmf1ciOK000~1,an.mail.ru,3656128131639737317,3496382637", ENDITEM, 
		"Url=https://recostream.go.mail.ru/?use_orig_imgs=1&title_length=150&ver=1.159.0&n=12&stream_id=lenta_main_mail_ru&query_type=recommends&_rand=nhs70e5hnta", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAZx01lRlAAAATbawBhCyVmMfzcEu74ZCjG54K06kKgnD2W8bpt3yB_Oc7u4ZtsZShgH85XNC-CvoGbkImJaPISauNyiyjwPVtcNQOoppsjynnrGJAm-cQdrE42hN6fcaStNw34a5RLZ5DvQhnpmT3IAFUICH8LcV3A.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAb7R01NlAAAA-h-P8mEj1afF0Zxs03i36DnQrxr4An2wIde06TWxL3NS-U4WilLYoOWGapl3nhX0iIT1YhgELovdCxmGSwzARbSTzbqKM-xGgF6M83jnAOqSb6jAgVrDujaZPUYgMcSnS4sWIS6b5LWqrQEoc3425w.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAdPPEWZlAAAAs-ghL5nCvXW_sCho1h_y3aOKc1ywAVqVYRc9cwUxUQ3oGzHYWLz7Z_vPl4Sg_xbBV0ZM38NLwym5sAaY3qsPhMHCiVSROU9_sNDa761UHzy4BMRk-tFUEWvXHKTCBAXzy_SMaPuHtAYD3OAgdPAkDQ.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAaNAXEdRAAAAd8qp9qAwCnTXfzrowUYNEcWCzgh0-Pw9-UYrc3w45SIW2C0S2tKo-opn9K8-qlmPrUIXHIaCTeUs-PVUO58zZmyPas6J69cv52OtiIxpLNVwWk6LrREiVpGb0moIsmdn.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAZft5QFlAAAA5TvnMdh67hiLuCPgOLhjsHy2OyND8OXQxp_hPveawohZ_evcTMJi9yaqNxqBlJciumlzeZhuuWZbc2gjNwhb65spluAMqG5sNi9XARkeHdiTQp8nwqSryn3PouVbaGqKGzXa4L_x47rKkbFqU1-OSA.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAASj_WwVhAAAAe1oyfTlxwq8KnS9gZfq9SVQ9pCJKUBfGZ8Xz1nSefP19Z8kITSE5Y2bp8t7Fe3QR4hey99d1sZ1pKrHP1u2uNwCYGz2rjBknunHDzrPBm8PeaLxyCf8SXphXvZh5hDXfrxaqbmSxmY0trxk2-XgdoA.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAajNhHBlAAAAQsPX-h483IPhuw2tZAsJxOor2PvzZw4S6k4ue0NVMJdAi0QZpOvtBOmGoPTNrzWqVNXh1KU62Tl0wEwLDqTxE-IV-KzT7wKEi0HXGEjV5_mwpPkGwpm9a3K-1GUM_4KsNFV3cO-PrWyKwFKFXoDEIA.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gF54BMLPeLUde0mNel4cPjslj9Xrh9ib7lQ6OsqE9HF_SylkNwZ5WT82atGaWbNQcBIBzTAQSobjDk3vlIanEmMDgHSh4AhDPoUxNsP2u7jNdOpJEaD4ncY_zm8H6tZBys0moEueUFSvzh0hAIZzqBD8okM3-_pFelWLRxpCjbAAfJQ0BllAAAAIfnAMdLxZt9W2LLpNDROiEIkZGvL70aFeI1Rag0eYasGmCGlUM-bCDlclus78wk0Vcd7CmBVh6b0ZljIU4ct8q_1snBkn_NBvFJoCKev88BBN_I3QRft9dfGpetXstv5aYwG5PazQQqIibSKPlDCCw.gif", ENDITEM, 
		"Url=https://rs.mail.ru/d36299731.gif?sz=15&_=1639864311355", ENDITEM, 
		"Url=https://rs.mail.ru/d36299749.gif?sz=15&_=1640187024014", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/"
		"AACD8gEw0TM_qdvPoLo_8dZewYNO_t9gCmYtdVNdkWKNqK8VzI6cCE-gjxgDrMQ_njQETq8GgjlH34pBcDg-zsZGQv6aeDTRb6SxMDW_luNZTqpUE5jubOfqVo3AJWMz3ya2zRZk6SCSlG7f_XQDK17vSLrC54lCm8f72WXJ06RKPyJSK2k9EWoOAgAA_IeHIXKdmABI1mlsMTJtvx0s_PJ7PXKRroA4ZmbbBftnLuhzm1WOWfzYiQk_L-H0XqNqHXH_umNJWTvulCWIu6zNN61LO2AGmlKupn8U9c6X_vWwX2La8bvtJTp71vpNFa3qCnjaNotNmO_ImxiyZXV2mssfWDwEIYgh8pYAYWdbk7N5KJpP-x7ReTp7a557nEJEQdQWyE6-WnH9DUfEg6KcFuW8C0YynDSxmBmfd3at6IT7aW_hA01-Enj5yh17uw3zt3OdFqFiLIS5Vtq9NVUoAqHSWqkF3_H1QWIowunUm7py0wxaq9-G-H"
		"G_yO_ToJD16mxFu8I2JNoc9P68ky_cAYbevUsBqZLi5P4gjrVBnlBZTiawQP62-iTAYJ6ZSta_PUNnCQObUVfkdKMUGh4IUP3a3wfrJWoR4pZopDk2575lSkNbEiDyqJvL3qEylEO-0dmMNUkHIWUIIji4Pnm5vXdXVOmCYVqwEUO2PdgeMXVI3-oPg3bChry6ahOY6ix-KBaYi7n2gQhUnr332jmEVHCKXZdJUvmkfhWnfYNU8WZzfmHd_PdwlwDgw0VHiTvdiGKIb7hgX9J7LbURCrNpwgMM6Ggps6l2YIe-kuya1bVUh_S2lDKxooE2YXEGZrvtDn1caf9UMjk1386an6eXsNva0pVuCry028ysNIyCPYBDT3HgDNlt6Rm2Nbhx.gif?pulse=promo", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_g1KUFt_AAAA41Bm-Nq9YnPGuWXZXEOYo5BrzzAas27otv7xbrHsV-ZqAfDYeMfivPXhMvb8uuwigRwvY5UfUeHoK0XQu_HB_dwjejTywXgRnXtVDk78SpYkf38WgqkaQUPb_g3B2PhcZ0tq8VJ2K3tJB8x6aNLxvsmeFyayGYllxYgzTe88cjo.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_s964k9_AAAApqgsg9QsLNw2mfsEosDG7uJjck4MBP2DgKmtn2UYbT98cVGoXN4lY5A7Rs1GqZ1uXAEF6UMrJ5dbVoLsrBPF6tjmD4z-LSzCmTlhuKmUJA256FnCA0WJNNcPwOPU7PoCKG1YE1KVGGkMQ0cagMUsfhfuXsLMMuDk0ruTe1CyxHE.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGOMMW7ib5iQ5f_6Ay8v9ztj6p-xTgdUQ8dYPQJ_a2ZxvsAkmz01N66ACSCoaURN0PhwT3yqD2pZ31xZ2kXH0KeqBDKFa4ZDeY4KVScIWFCzDgSBBq1EyMp7HLBOCMVu0RJeB7uaItCdZ5gTU2zWknOb9s7wfc7eDrTqhUUsdDVKoYxeg50AAAA6i7VhIIcw_yyj5LyIkPISmHb0i_yQjSgqquGKcPgWRrg1hy57UmNrDL4zKWfUUYxrC4o1N_64ccomyRf_8KsaRAiAknLdoTXG8POU84-SZwfUm-bxOVzy9VSLReg5cKA0sdIC1nkHh6TcqlctWkprXKJ39SCZlesPOXZd2Cb3uI.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGOMMW7ib5iQ5f_6Ay8v9ztj6p-xTgdUQ8dYPQJ_a2ZxvsAkmz01N66ACSCoaURN0PhwT3yqD2pZ31xZ2kXH0KeqBDKFa4ZDeY4KVScIWFCzDgSBBq1EyMp7HLBOCMVu0RJeB7uaItCdZ5gTU2zWknOb9s7wfc7eDrTqhUUsdDVKuwezw10AAAAhIzBYw8EVxIidy8wQnUe_GwPPKpKicE7X6-fXEOll2WNo2uQbJjkdPsL5asbqexwYd377bHayurU4AgLxIy4FbQcNNYwICQMFhk1xaMBxBYreA7XX9u3X0pogYDq4gWf-Xsw9Mz2GM7abY1cA8fYw9CCQFuaKvt8iaSYawQ5wLQ.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_hsdoUWAAAAAyesbxUhfq03-Q9z-Se9wNPg5ACMPLg_8HZLJAPVOiWrK8TBHmDqE7l8c7dH8NYuXVmw6LlJM0sYtDPE5UsYDjxa2M7DQNpfQCOFFZWKGIFyqTlaZA6ynqtb_RxOPFCyGNNCCEnGqEHhHsLa4qbnbZk-6jQVmWaWWf3CDRCHOGhE.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_syf2BWAAAAA06YamQG2EOXfxbY__1cu7LASrUU44ABNARg8Mg3czuVb-vCIopvHrgJZPk6mvuh7XgI2g3u9IRV0jRhSSijaVHrKG2QtkmMg-rxl1-LjRP5ZHC5EGZdFTUNN0NFXWydqsPrzByBvPQQpa-mVYBusURsWFWTE6ix5B1ZMSXw5340.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_qxJm1mAAAAAsNgBNjrqTH2pau03ClXXaEqztI-E49aDuhzwdxpB9P9NIzIXQn7zXg02L3vao6TrKjm2o4rZlUGhPp6FB9Sh1_dJMQj8m8lr08jJ2IPh5rZQsab9arEHfIqAtGTzx8e4fNB5PwOLqUn61sbYplbcQHgeH4iG1HQgj9a20JYGfUk.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_qBrkjmAAAAAzUmj2UDruPyjXc3-OHUsOFOYVrLSl5TqDoC42bzWMErTxO4g8Bt7YDjKIXOyT-eVnYZ7I7r9cMi032cxVn7gop_vbl3s0Ipb5mm4eR_60y68BTN6qFvlm6zWVwUEh4ogKbxqyytcqlA7aCKkkvEs6z-8mM497N9dJ3SbPEtPE7U.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_sIAZkR8AAAAqO6kqpu9n37nIDBGUwfcXjAfKIoVH1vGJRx5GBZjwMRNwx5fuDAjVXqhlczROC2xaqsBE7WLva5HOxU-RLxcXj3Di0VVyGdO6qOvjwUwjztOP3IgyJaMwRMjw8fQjN0AvmUnvFmlIz47A_J2yLTIh6VMOsaR2gXDSjgXkXjfl3k.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_iJ59ktsAAAAfWK74LhNjvBWyOrK7ZQEGJqMfn2b1Z3d-GDIm4zYtWEcSQ62TSEx1YmYsIa5zEiQsbkMKlFGSCY6txOw-yunoi_bf0rELljxNXSN-C2SlVFK7_eXHg7YhX8PvaaF6jwJXas96IiQyvHB3MrOWceM2Q.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_m1jLSSAAAAACRWOY7JbzLYRiEvKy-SPXBI2z5t-kY9XxGW25TRCuQb7m-j9mZBXo5omHJ54bA07M1GllJ7Vpa7HRk_UrEIwioLhiB0CK6owufdPPyKLZZLu-YqNuDNcLdGGVCaex8z8rrOH9w_JSTYV7NZUmUsuREaRLstdniAzagHClRvWG9g.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGBHJJ_kCQfn3OU4fpU_faVHsZrUDaXlCjW7qZ-_v6BcolexGI7y890-46ufwhWIuhJk-OgXFO1nhMvOFGlBdXHCOlBahpvBPMA6iFyLl_QxFXt67ZFS2phIJFB_CT0TiDELJBW-PcrUQzd_sBfmj1k3wLE1ehr5liJR2rmsOML_ivG4mKAAAAAwreCos6LfFkjWD-PJrfbVdsVynd00KtNdNKKArFN1TJokL71ap1uKL0cbS64NFTL0u0sXqcwlhgYdFSdvTT-ifU6ehd7XdzYZ4nFsWjDFi6VVjgQKt_Pda9fXaD_O79AqAg2U4-JmHdEHbklJTd-kAVCdKCeUoUcNS6covIfMfE.gif", ENDITEM, 
		"Url=https://xray.mail.ru/update?p=resplash&t=load&v=36174&i=connect:10995,request:172,parse:24150&_=1640269692564", ENDITEM, 
		"Url=https://xray.mail.ru/update?p=resplash&t=logo-ok-onload&v=1&_=1640119006785", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGOMMW7ib5iQ5f_6Ay8v9ztj6p-xTgdUQ8dYPQJ_a2ZxvsAkmz01N66ACSCoaURN0PhwT3yqD2pZ31xZ2kXH0KeqBDKFa4ZDeY4KVScIWFCzDgSBBq1EyMp7HLBOCMVu0RJeB7uaItCdZ5gTU2zWknOb9s7wfc7eDrTqhUUsdDVKknqayJ1AAAAPi6VI2p8hgJpsD8jVRa_awk1Ne9fyu9VFP82IiZiUIx5Na_cDbMc-XVCjh-PGJRCs5GPlfCM6hrIVuamYatB_OcAb6cmA7Xxj7vxOctXp5jTs2NzYpDjTcXRhC3fltQyMKxxhIvk6YJm47sZaPVTaCW_xcnRsxsQp6Ond1vZS9g.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGOMMW7ib5iQ5f_6Ay8v9ztj6p-xTgdUQ8dYPQJ_a2ZxvsAkmz01N66ACSCoaURN0PhwT3yqD2pZ31xZ2kXH0KeqBDKFa4ZDeY4KVScIWFCzDgSBBq1EyMp7HLBOCMVu0RJeB7uaItCdZ5gTU2zWknOb9s7wfc7eDrTqhUUsdDVKh3FUml1AAAAuyRav7c7VpbQpaoHgasJbSddOjJRfEyKyo4Csmb2kLMmg6W3gP5P_c_KDraDNbCHg2SBtQ8DK8d8wAl-A8mj7pMcYIG2VneihOtOX_OBqV5ER4GaFHVyJnZswcqiXJHOKLMNOtXg7g4E-1aV65V1UjlnzkhQsjIExW_hmPGBCnE.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGOMMW7ib5iQ5f_6Ay8v9ztj6p-xTgdUQ8dYPQJ_a2ZxvsAkmz01N66ACSCoaURN0PhwT3yqD2pZ31xZ2kXH0KeqBDKFa4ZDeY4KVScIWFCzDgSBBq1EyMp7HLBOCMVu0RJeB7uaItCdZ5gTU2zWknOb9s7wfc7eDrTqhUUsdDVKmKCemZ1AAAAuQN6OBG4897Ft45vu4HPM3sqoOod9W8dtELoRbgMrz0CouTWyAQtEt9fRyyoaO3Kk6ncXeVnpatsOUBAxxkJmdAIBhF29Ebb1fgaewuVNWgzVyu9cFPY9flzL6b7bX__hgEfLZp0VZRsfj3__fxQsvY9eD4GtgEtKi-AZffvXjc.gif", ENDITEM, 
		"Url=https://rs.mail.ru/pixel/AACD8gGOMMW7ib5iQ5f_6Ay8v9ztj6p-xTgdUQ8dYPQJ_a2ZxvsAkmz01N66ACSCoaURN0PhwT3yqD2pZ31xZ2kXH0KeqBDKFa4ZDeY4KVScIWFCzDgSBBq1EyMp7HLBOCMVu0RJeB7uaItCdZ5gTU2zWknOb9s7wfc7eDrTqhUUsdDVKis69Qp1AAAAMgNdZ7uabIzMEu1XxdAmiFwwSmGG7eK7-1VHtdSKkDgvp0Zz2l8aijHQzYx_pkjdcY2icTB8L7bnRlJyvMb5G46bD-AMTZDlJ2gQV9WfKJZw3HhHlV9ZRPxgwFT3acFSC8N-KFk4EfAbzoeklJi_-FjFUpA6H_BlyyGVKT3dUIU.gif", ENDITEM, 
		"Url=https://rs.mail.ru/sb6111529.gif?sz=15&_=1639848265299", ENDITEM, 
		"Url=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=703061,666520&_=1640568775308", ENDITEM, 
		"Url=https://rs.mail.ru/sb36299763.gif?sz=15&_=1639976896308", ENDITEM, 
		"Url=https://rs.mail.ru/sb615214.gif?sz=15&_=1639854957980", ENDITEM, 
		"Url=https://xray.mail.ru/update?p=resplash&t=auth_ok&v=288&_=1639750557122", ENDITEM, 
		"Url=https://rs.mail.ru/sb33069639.gif?sz=15&_=1640367258075", ENDITEM, 
		"Url=https://xray.mail.ru/update?p=resplash&t=logo-ok-onpagehide&v=1&_=1639804867865", ENDITEM, 
		LAST);
	
	lr_save_string(lr_paramarr_idx("token0", 1), "token1");
	
	lr_end_transaction("UC_01_SaveToken", LR_AUTO);

	
	
	
	
	lr_start_transaction("UC_02_Info");

//	web_reg_save_param("csrf_token",
//		"LB/IC=\"csrf_token\":\"",
//		"RB=\"",
//		"Ord=1",
//		LAST);

		
//	web_url("sg_main", 
//		"URL=https://suggests.go.mail.ru/sg_main?compl=1&empty_q_trends=1&q=&platform=windows&src=main&ush=1&v=3", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://mail.ru/", 
//		"Snapshot=t13.inf", 
//		"Mode=HTTP", 
//		LAST);



	web_url("info", 
		"URL=https://auth.mail.ru/api/v1/pushauth/info?login={logsend}%40mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("UC_02_Info", LR_AUTO);



	
	
	lr_start_transaction("UC_03_Auth");

		web_submit_data("auth",
		"Action=https://auth.mail.ru/jsapi/auth",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://mail.ru/",
		"Snapshot=t38.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=login", "Value={logsend}@mail.ru", ENDITEM,
		"Name=password", "Value={passsend}", ENDITEM,
		"Name=saveauth", "Value=1", ENDITEM,
		"Name=token", "Value={token1}", ENDITEM,
		"Name=project", "Value=e.mail.ru", ENDITEM,
		LAST);
	lr_end_transaction("UC_03_Auth", LR_AUTO);

	


	
	lr_start_transaction("UC_04_Inbox");

	web_url("inbox",
		"URL=https://e.mail.ru/messages/inbox/?back=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.ru/",
		"Snapshot=t45.inf",
		"Mode=HTTP",
		LAST);

//	web_url("inbox", 
//		"URL=https://e.mail.ru/messages/inbox/?back=1&afterReload=1", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://e.mail.ru/messages/inbox/?back=1", 
//		"Snapshot=t46.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=61944424,61021866,61021863,61021862,61021861,61021860,61021859,61021858,61021857,61021856,61021854&_=1640098317110", "Referer=https://e.mail.ru/", ENDITEM, 
//		"Url=https://rs.mail.ru/ns.gif?n=360866022,360866021,362894341,360866036,361700283,360866045,360866006,360866032,360866010,360866029,360866019,364244819&_=1640115036281", "Referer=https://e.mail.ru/", ENDITEM, 
//		"Url=https://rs.mail.ru/pixel/AACH8gFNO6lipMv0ujYQZOUOpL4NJbfxPlQ3nvV7MQHOUZ0-k8PXjGENCFl1OCp_PHqH09m1qelUMCZvMzuG8p6_XSYgmbO_gd2N5XemhA6jzToNt0RbLoQe1bfNVPUgcW-mJfXjmAEydUAoWYHT4ozD3GryBafIVtDPV9s6hhI5wqroVqI-Lm8tAAAAGNEl8-krcB4LZrJ4vWh_tMIwMjRJhUMTHq5w0GJNMdZUy0ka_cdqxWYlfc7lzfbL.gif?_=1640941803791", "Referer=https://e.mail.ru/", ENDITEM, 
//		LAST);
//	
	
	lr_end_transaction("UC_04_Inbox", LR_AUTO);


//
//	web_reg_save_param("token2",
//		"LB/IC=\"body\":{\"token\":",
//		"RB/IC=\"",
//		"Ord=1",
//		LAST);

	
	
	lr_start_transaction("UC_05_Inbox2");

	
	web_url("inbox_2",
		"URL=https://e.mail.ru/messages/inbox/?back=1&afterReload=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/messages/inbox/?back=1",
		"Snapshot=t46.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_05_Inbox2", LR_AUTO);

	
	
	
	lr_start_transaction("UC_06_NaviData");

	web_url("NaviData_2",
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login={logsend}%40mail.ru&_=1640583186139",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/",
		"Snapshot=t51.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gFzS5p7A7arTrRfGXHSMMtGs3Rz4qyV-Y4FbrVGOSutqHRK0BzdF0RwFpAN55Be7DrAJmDn1Nb3NMc2X_PGTi9eHbZMUNsb_km0oGDZj7lqdKBPmIMEjPVGypHAnTuxdejsdION-ZtjNjK1jFOm3i1eT1I473Mad-RBdNh0ZyV1ehLMRTwsAAAAKmiFIdIBVSfYY6sCC31fpz0vnkhz4dQhPr7P4srS8SPhdkoCzLudhI5iEl0mzo6p.gif?_=1640242894094", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/ns.gif?n=360866022,360866021,362894341,360866036,361700283,360866045,360866006,360866032,360866010,360866029,360866019,364244819&_=1640572725098", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=61944424,61021866,61021863,61021862,61021861,61021860,61021859,61021858,61021857,61021856,61021854&_=1640008328103", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/h0c140?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://bar.love.mail.ru/jsonp/bar?&_=1640049201385", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/curxh8?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/ac5sf6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/efn5v4?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/ds8xq6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/pqaft6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/k9iu14?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/koydy6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/z1q4a7?mt_campaign=mainvkmail&mt_adset=&mt_network=1&mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/y7s979?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	
	lr_end_transaction("UC_06_NaviData", LR_AUTO);



	
	
	lr_start_transaction("UC_07_Unread");
	
	web_url("unread",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737330273",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox/?back=1&afterReload=1",
		"Snapshot=t56.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://trk.mail.ru/i/pllim0?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_07_Unread", LR_AUTO);


	
	lr_start_transaction("UC_08_Aliases");

	web_url("aliases",
		"URL=https://e.mail.ru/api/v1/aliases?email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737329748",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox/?back=1&afterReload=1",
		"Snapshot=t57.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://filin.mail.ru/pic?from=ph&email={logsend}%40mail.ru&name=test%20nagr&width=45px&height=45px", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_08_Aliases", LR_AUTO);

	


	lr_start_transaction("UC_09_Smart2");
	web_url("smart_2",
		"URL=https://e.mail.ru/api/v1/k8s/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1639737325&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737330862",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox/?back=1&afterReload=1",
		"Snapshot=t61.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://filin.mail.ru/pic?user={logsend}@mail.ru&email=security@id.mail.ru&trust=true&sign=2eeaebd0072ce415b13b292882bfdc8299a42f8c&width=90&height=90&name=Mail.ru", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://filin.mail.ru/pic?user={logsend}@mail.ru&email=welcome@e.mail.ru&trust=true&sign=ee526316af8301f7cf1f0d87f00039d74897cae3&width=90&height=90&name=%d0%9f%d0%be%d1%87%d1%82%d0%b0%20Mail.ru", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);

 	lr_end_transaction("UC_09_Smart2", LR_AUTO);

	
 	
 	
 	
 	lr_start_transaction("UC_10_Security");

	web_url("security",
		"URL=https://e.mail.ru/api/v1/golang/user/security?email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737332309",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t67.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEh3bdeTIYGwUxXirIMOk92kdCa9LgvU_hVdULM3oMmq9gB7Oj_RS5XI4OszFUu_kN9NrrTDnORDSClZkKjbAvlJ0StybKFhn2PrzueTB7N9GP8drzOy9Cvdf2KRoEL6MNKZPBS5goH1DoFqqsbOTfSNH3qeyWX5m8Zl95oulAabYU0ennSAQAA51UFrMUDcrEn6Ehg1-yjBZ9I3BOo7RKf5rYos1B1J_xkCKxZvX9Lh3Zt59FnkgYDVQ1qZD_U2qpEK0V4rA2DgZN6RaRN8AcE0VXK_HnHjjwSBbH-SMzKN6egiQ2dXBoWsG5MCw2wblxesJWRMNHXQuj2ucpPbKjG3EoPHXtW3ris4bp3CIWT8N-b93xyTKxdG7opHhdQDjfhr6x6VLDhz3aEN5WnOlPvV_uDhOHP-yyaEOcwgQgdq4dF43fJpHQSZn9qDsh9a0TFTlLc6dkLED-gIGhmBZAoWQ2W0tgn__LNQDVHkVMr3nY3jwVIzi4nFpH6SMVd4EWpbInwrLWAqJnswrE_ZvfEbB8uOsSdBlOdJm23RvQGjA3u69CPwjaqwiKFtqtFYHN9hubWOna4JRclYD0rzDO0kEf9OaQj_f8yURtlv6plV0ShRJnRtf8dqoKbk-36ELp7cQEqqy7e-Ps9nUWwWk-O41y_cvgqkuMnT8ux4vUdrDsAe1PF7gVI_lot4HugBwK2Bo1dT0NJqDbEBUcpR3b-nCkcwqTdUiLyTa6fvonKCNmPVnr4LdEHAEZ2jLXHPWwrLwQrDh43fyTJsq-3FLh69TDy3dDpEgCRXLkndtNZq0QC1a7F94aM.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
 	lr_end_transaction("UC_10_Security", LR_AUTO);

 	
 	
 	

 	
 	lr_start_transaction("UC_11_Short");

	web_url("short",
		"URL=https://e.mail.ru/api/v1/user/short?email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737332309",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t69.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEXctoVPfx7uahH3tKKPRCL9FIBum9YB12_k8Z5YtTY4Fc74AyKljt_4yoLjth4jdtsQOID3zFXR1KMHA4AhGdfvd_mumOWQJPYzYbBzBwKA_kgR1dmS8QgOWohuv5f0bKRoUcuh9M5Du3W4uvnBcQTWSh_thmTYfToOeUTv90-MTylKzd8AAAATCVc3LupG4vOw7zJ5r9xnF8hsKTzUbSgCYxVx9WfC_-HgoGObwEDD7D86KgHH-MVs4VmXeWyLJn1oYxefwsGPPTrF3v0KRCJn-vsuz7ZAGE7kYVBLZUaO0rqJvQtfajssBUzr38agNIcNog_arqE7Pne_E91m9zB3fNZB7XwSAw.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
 	lr_end_transaction("UC_11_Short", LR_AUTO);

 	
 	
 	

	lr_start_transaction("UC_12_Request");

	web_url("requests",
		"URL=https://e.mail.ru/api/v1/k8s/messages/search/requests?query=&limit=5&email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737332491",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t74.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_12_Request", LR_AUTO);

	
	
	
	
	lr_start_transaction("UC_13_Unread");

	
	web_url("unread_2",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={logsend}%40mail.ru&htmlencoded=false&token=f8516f38043283711adc54a8900cbec3:47570a5a5570710719520a02080557060a040700070104020407555557070558080e01095a5a5453021654475c6e4206&_=1639737337553",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t81.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://filin.mail.ru/pic?user={logsend}@mail.ru&email={logans}@mail.ru&trust=true&sign=0fb9152404076b9a61d9ed5471d63a5d07bbc39f&width=90&height=90&name=nagr%20test", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_13_Unread", LR_AUTO);


//	web_reg_save_param("token",
//		"LB/IC=,\"token\":\"",
//		"RB/IC=\"",
//		"Ord=1",
//		LAST);

	
	
	lr_start_transaction("UC_14_Short");

	web_submit_data("short_2",
		"Action=https://e.mail.ru/api/v1/user/short",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t102.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=email", "Value={logsend}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token1}", ENDITEM,
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEnZ325FITUbsXtfA3Tocntd18xn3ZFpwbXLqYK5Y77pClZ00eics41r5Mh6RaQz9uHDi4TAwVo_xE1q8D6R4jnsGRRLUnOoA9OPOp5Y-ZygYh8t20-Ly4cKCpZeVdkH8nLKskUmXQNfsDAZKp2p0Xu2Y-MSnaqDDyMXwlxX0vDiJaL0xGKAAAADISlHnsdZFrDyfgtR2kC3-frpz7CNbs60groWvy92iuczASxP91QqugKZxjrmwax4Hj3K-TyT2sbmVB9Guvr0P3wsJ37yjrwPbMBsOMSNpQk9tX2O7-2czfNxuhvH3XNSspjkbFucU36UdZJxKECQwBQcEr2JRD5hpWiRRohakIcsCbDpEbgouLqy0GkTkpd.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGLfuiNkleGZFgM9bHrpw7Hdk6czgSn6QMFP4PDNo2flJYNRb5gEeEZW4J69WevQAkw24W6aJmNzLv_bJsSeT7NLuz1t2w30LdkVQFTaneRuxB5I63CZ68El-mMRcSjGBN2VhZs1eDoj8_Q4707-gSPnez7sUCqzQUdAwlMoz6l5uGu_A9-AAAApWqjXuoX7H8phym60pShnYZqub0xvaVWpidDQc2AVFIKbmKOd12A1FTcaahm3_5RWDzLL88lyOvEKj0aPAd2ryiaUm5Mh8LPobWdVEwuCbKa4Xq1B5xs-RpaHAmIAw7F4zD2mBBgc_VWATsxAH0pzxl5aHA2wxJGQCLeLkOHTBI.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEJqolmnSbyNp39xyLNa_tygnfalHMh295WfGQVCkV8g0KuQeo1zkoAJ2dGxIV1PhhZa-kcFvST2vUc4LEggFqAsgj2IgZhdinEWhIxCMJd9D_vZFcZfD2jb8dY6OOxJ_PSG4SvyAgyikz9Ruy9sgHDN9sgIyDjOrtR0u2G_f_iSfITIDWbAgAASoGfGtm5vTZp1JhSPhIb9PcHBd6pQyyiU4_W2amqSxQ-6kZaiT4WxaAzMF7o3ve2gNep1-RYCeL7PeQqR1boNwiP8iWzCn1iu4c48kAoI3oZArNUmvuEF7Q3OrP8OJ010pV6mMTen6I3hm5No_2CzfM8Gyg_CVb6BQMFYyQLlfkg5UfVMV7mc1w0eZDlPHmCe7iz846dTaQj_P7k2ekacxTj1A76Fg5GXi2lgUieB3qiF8nh_UaAyIe6YR2sYw4tjhH5t1ZirtA72w00fT9OmGw770rRcmnqRRvV9A0Hh7WKYm8CjtIY6DE7REd7CUyQbopsch5hwASK7JCx3HuqV-UOLocDowVs5p9Ru7sq9S1W3wpC3WmiExTI1qx-Mpz67IxnxChAItbvY8MlUZPvsZABpzNVAdujX4nbPE9nhdqsVA6tTnmzXJXmZcjZEF2dK9heO3WJ5EoDKU6EdV6sZBP-iOJnDubueF2OzAwRWx_arq5xy9nO0JNtM8zmz2H0r9NUDOhFYJObpSvM79ZwY8ktY8bSy9lgA1spVf7mxhIeOjVALIAHXQ52YAadaJOzq50eaSFIOoTCnLG4Nzx2K9IiFFgw-wPtWMXkkyUXadb2Q67GuEW3i6sYww6282sDiqGnbkG16yKsEAyBqSnQ11W2rZBBkvTxPXg7A4kaitQ5knMwdKQv2Rf9ptrbK4fcJ6cpmSnUDEfiA1-pDrVofuBMJZ9_ChAWg7Kiil5wR0fodzzLQyP1iFK9K4kLFeNq96CrgKg6s0zY9Y3MoUGtUPlU1T2Qo2o5TzwVIJ"
		"vVn0ExnusGH-rlrenPzP-3kSrVbgoiSvACNWseXcFKi73egSlysZaQsAPqzocGZ_PeqVTg_QGEANod0qQ9J7gHQZ6k.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGLfuiNkleGZFgM9bHrpw7Hdk6czgSn6QMFP4PDNo2flJYNRb5gEeEZW4J69WevQAkw24W6aJmNzLv_bJsSeT7NLuz1t2w30LdkVQFTaneRuxB5I63CZ68El-mMRcSjGBN2VhZs1eDoj8_Q4707-gSPnez7sUCqzQUdAwlMoz6l5quaVER9AAAAGsmnYfP1m6z7VOO5oNizawRWRptvxkGDJ3748N1cnuRQf5HhNI28I3n5jwcFNbL3WrAoJdiu49wcQtAjU4y4dl3gDL2ydEXRJWzeaDLM6djH6_PZEWqVWTycBDaxMz-ubAloUMmcyE-lWWKkuVq3SypZV1Da9E06p1jOlGKJQMo.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGLfuiNkleGZFgM9bHrpw7Hdk6czgSn6QMFP4PDNo2flJYNRb5gEeEZW4J69WevQAkw24W6aJmNzLv_bJsSeT7NLuz1t2w30LdkVQFTaneRuxB5I63CZ68El-mMRcSjGBN2VhZs1eDoj8_Q4707-gSPnez7sUCqzQUdAwlMoz6l5mvDVSN-AAAAmNPTFlEJvdPWJoPbF3LHo0AfMuvxOfq8hHRE_8XbmHlKVVdbn6Lohgaw4I0dCtMKnA2JIBijkPpO2P5XBH7hmnSXNfUnpI1zWb5SzwZxolDurBUxk9cc-xynKM8l-m6-2CDkltIAdS5pcCkBnGXBwg125M9HGm3aVekKyJUetcM.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://filin.mail.ru/pic?width=90&height=90&email={logsend}%40mail.ru&name=", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_14_Short", LR_AUTO);



	lr_start_transaction("UC_15_Smart3");

	web_url("smart_3",
		"URL=https://e.mail.ru/api/v1/ab/smart?fields=[%22id%22,%22emails%22,%22display_name%22,%22priority%22,%22nick%22,%22name%22]&simple=true&limit=16&email={logsend}%40mail.ru&htmlencoded=false&token={token}&_=1639737343368",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t104.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_15_Smart3", LR_AUTO);

	
	

//	web_url("token", 
//		"URL=https://calls.mail.ru/api/v1/token", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://calls.mail.ru/embed/p2p/?email={logsend}%40mail.ru", 
//		"Snapshot=t105.inf", 
//		"Mode=HTTP", 
//		LAST);


	
	lr_start_transaction("UC_16_Smart4");

	web_url("smart_4",
		"URL=https://e.mail.ru/api/v1/k8s/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1639737329&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={logsend}%40mail.ru&htmlencoded=false&token={token}&_=1639737343789",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t108.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEh3bdeTIYGwUxXirIMOk92kdCa9LgvU_hVdULM3oMmq9gB7Oj_RS5XI4OszFUu_kN9NrrTDnORDSClZkKjbAvlJ0StybKFhn2PrzueTB7N9GP8drzOy9Cvdf2KRoEL6MNKZPBS5goH1DoFqqsbOTfSNH3qeyWX5m8Zl95oulAabR7KYSPVAQAApRlkf3JHQXAQYiQJvcaX-YBtm9ZS-fZQQ4Fz6OwSU2SygqAPhepQlw7ZCqucCENgXCpJ6i1brA7pOuGXz0-jScS-YGXIoyNGontnPhuLSjDyOGtnh9o0YOaiIH1Qn9O79EBVB1WIq3K0Evo5mxp-xi3GiicUX7_9FtytxjOSb6CPkWNCTPTGMsUAhPD6NfW-HU7kdp9bUzH4lRl0dY3LBePyWPsnL1ib309N7hOSQxdoxRJfia1InjoWVeTGnZzBDQIQBp_t8gG6pAGkrAoeuvHwnbmIbsLohYBTwplLFOQxBSaUOvKHXcQ6-QjGeEV3yZPeZJiZxEV8s8D0KmJDEv7RUCT_WAdbvuugQA2FzrqKHhTxpYssUCV7eQnTcdGwKKCYXELBDUc7bDtQjppwZYH5l73J4z7xrla69ispnZnaGuVWo55h4uqpJxVSYh_hCM0MRY2hHX7ikZ41zLpu8-vZ7aop6PerboTuNVkUFD6KF2AteuLKJWOrbYddbSAAMl0xt0rW7WXsg8FTDp93qctlUlNgjsj0nE3p-oJ62b7Fo7oUmBsbiAw-Cf1QYxXRn3wi96TWwn4cwtJ_a0YGRyXGdGIBPfI8rqtz1q5SqJelYIUkHVeq90Wfc6vTpmmm.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEh3bdeTIYGwUxXirIMOk92kdCa9LgvU_hVdULM3oMmq9gB7Oj_RS5XI4OszFUu_kN9NrrTDnORDSClZkKjbAvlJ0StybKFhn2PrzueTB7N9GP8drzOy9Cvdf2KRoEL6MNKZPBS5goH1DoFqqsbOTfSNH3qeyWX5m8Zl95oulAabbZmGwzVAQAAVE-EiSvJcyddrDmDxkgfF8R1XzSJsdm2itx6w5RLuR2JPOXzpBMAiUFQOvtZ1gbzQtYdPJINbSNZrKSPLSwhlI8xurO82JB5Yduja9SVW1z7FOd5EPpHINeflrkeYRwD59AW43qW_piyZLsWkvjOqn_JlzvMXiYjZRD0lvYzWLFhzllFWf9n858DN-K2lWRg0QTAMfhpghTkb4jyXfFwS2QIjm5Y2Yob_sjPRnpQYX4yvpj8km86yqA3MU0Jq1mG6e7sDAMmrO3kDoRTyo6bS8Yb4MOeBgmnHO9sOwKJgTMGs4X71jUj2WRM7YcBSKbNsIVPTw3hKrYKlbrV4L0h-7RTVy8uOs2YLJIMRNFPx8LV8VzIHXfWWFeqjzQv5KGncVZeb2BJLUMkHvZcahnNu8D8qe3s2nOQbsxJ1dL2lCePMDhbxswzTGktNhiEJFm9uvWMzDFVt8Q2RRtC_dJYXF88Be73QSLTBpLz7vyTD-HAaea2pSLpHS-YuDQABPvwG9HVVwTdgsxBwyKrq_QnzhgAoeRAP9xPU3ecnTy6tIFMde-QclAmh0rU03nktQk3fj64lCixMnWpDV11ocOOJN97pP1bakn48hKUdVys6Ds4tO3AYiILAaq9rhiRgPma.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_16_Smart4", LR_AUTO);

	
	
	

	
	lr_start_transaction("UC_17_Suggest");

	web_url("suggest",
		"URL=https://e.mail.ru/api/v1/ab/smart/suggest?search=na&limit=16&email={logsend}%40mail.ru&htmlencoded=false&token={token}&_=1639737345541",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t111.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://filin.mail.ru/pic?width=45&height=45&email={logans}%40mail.ru&name={logans}", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://filin.mail.ru/pic?width=45&height=45&email={logans}%40mail.ru&name=nagr%20test", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_17_Suggest", LR_AUTO);

	
	
	
	lr_start_transaction("UC_18_Smart5");

	web_url("smart_5",
		"URL=https://e.mail.ru/api/v1/k8s/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1639737329&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={logsend}%40mail.ru&htmlencoded=false&token={token}&_=1639737345637",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t112.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEh3bdeTIYGwUxXirIMOk92kdCa9LgvU_hVdULM3oMmq9gB7Oj_RS5XI4OszFUu_kN9NrrTDnORDSClZkKjbAvlJ0StybKFhn2PrzueTB7N9GP8drzOy9Cvdf2KRoEL6MNKZPBS5goH1DoFqqsbOTfSNH3qeyWX5m8Zl95oulAabYBejlfSAQAA6jGsCDfMqJb4mpv_w1nToha4IanObqqnZXPLRbWgO36KrNfcgaOSvdEhpHCxdM7DZ7wBTpCVYuESOMT9T0V7RKrQ2Y7mPslifS2UXbFBxviyca8tsDcXoffptSdw6tUBtAP3EEkJI4WAX6FUNzucwNF49PS32e1bkUrs7Hk4Y7aPnE-GglZ6SNQC9KsY_QkoE4iK15DpmolJFi8tOcClSQxxZwrHMO9Fs9kHSLWTvhbRzNjLU4S0P2C5Nzf0YmAaXSQLYh7jEFe41B8aIKAdOWoxQ8V_57MC4NR0Il2mM_YVbKTu4nwEWurB6Gek8WxCrD5y9bVlEqGpeYTJMV1yvD-druknorPE1y09ACE33j7ms4Wd03lUi7yFqAeQCLkGbKnZDGuGdKHFz1Adx0W5muRp5wugVFCfRvM9UbhGiuil2zAZMd1-URk4RhwLiv4pbdFp6_AUox50OafsOHAV3iVK0fuYZOsTt0bf6c_qlGXy-eczEBtMr12YN7-OAGKVqem2FatXk-PoFCd9MujYEspAFdZeVx4CeKH06_VKGZP0t4EAhuuNZb9dKJdJ0rMHwGZ1IcmQv4vwjBa3vxgshL8-t0jzy5AxDG7aFijABdqHByvLrjoo6reLtLCaC15z.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEh3bdeTIYGwUxXirIMOk92kdCa9LgvU_hVdULM3oMmq9gB7Oj_RS5XI4OszFUu_kN9NrrTDnORDSClZkKjbAvlJ0StybKFhn2PrzueTB7N9GP8drzOy9Cvdf2KRoEL6MNKZPBS5goH1DoFqqsbOTfSNH3qeyWX5m8Zl95oulAabaZ_iEjVAQAAJNeu3GblpzwCMIkIhe1_ruWzBiqvOeMsgpRDtoYvX3LyIUFt5wJiamlASj-YjU8bR5Ll7f8mbz82H-AofNpIopQXmLGicQkWpsE-Izsz_gqxfPnuYqnwUoB6O9BTVxJMvE1l29ZGDyKD636gceK7Qqb3GMugFNafOUkgVxY-Yf0jjcCoBdEyf2D9C2tkctU2KnrmoEuvDdx56QN-mGwEbJBTo7M7cm2goSmbpeS9vY_ESachdt8bv_3A-agJCfrnGZh29XwngZ2dyKaNzGdG66ztZUmPeKn-4yyrA6skPChHYdGLtVz5ZxaEmAFehwKMZOrjZh_bOihzyk7HHMnOI3k_Q20ApIH71qMflVd4fhmXJ2h7gR9E-mlQWmXMnkwyamfQsA8cl57QsjRhAQPzuTC6I-9BmxNlXXnPMg_TIJvPNdVSXZupqHknlYRrw1n6u-WHP7FFJTZUE80vaDQBciKRXlNvz0r2dqiIget3cEcQijTi6VWwJARufsXa-k_A4jTYemQS_GJx_TxbajkvuOAL5C68FGOhKu1fPrWXy5bWd_WQj8iSJcPr3Fi-jGUaKKq1OYCcnaE7f7dn_TiiATaivIaOPw1ngRxIrt0CItmpGy4ELM6LjzO9GlsejBdv.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_18_Smart5", LR_AUTO);

	
	
	
	
	
	
//	web_url("token_2", 
//		"URL=https://calls.mail.ru/api/v1/token", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://calls.mail.ru/embed/p2p/?email={logsend}%40mail.ru", 
//		"Snapshot=t123.inf", 
//		"Mode=HTTP", 
//		LAST);


	
	lr_start_transaction("UC_19_Send");

	web_submit_data("send",
		"Action=https://e.mail.ru/api/v1/messages/send",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t126.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=from", "Value=test nagr <{logsend}@mail.ru>", ENDITEM,
		"Name=id", "Value=4b479A53F21e89176E7613B8c860389C", ENDITEM,
		"Name=source", "Value={\"draft\":\"\",\"reply\":\"\",\"forward\":\"\",\"schedule\":\"\"}", ENDITEM,
		"Name=headers", "Value={}", ENDITEM,
		"Name=template", "Value=0", ENDITEM,
		"Name=sign", "Value=0", ENDITEM,
		"Name=remind", "Value=0", ENDITEM,
		"Name=receipt", "Value=false", ENDITEM,
		"Name=subject", "Value={tema}", ENDITEM,
		"Name=priority", "Value=3", ENDITEM,
		"Name=send_date", "Value=", ENDITEM,
		"Name=body", "Value={\"html\":\"<div>&nbsp;</div><div>{messsend}</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>test nagr</div></div></div>\",\"text\":\"\\n"
		"\\n"
		"{messsend}\\n"
		"\\n"
		"ПОДП�\x98СЬ\\n"
		"--\\n"
		"test nagr\"}", ENDITEM,
		"Name=correspondents", "Value={\"to\":\"{logans} <{logans}@mail.ru>\",\"cc\":\"\",\"bcc\":\"\"}", ENDITEM,
		"Name=folder_id", "Value=", ENDITEM,
		"Name=sending", "Value=true", ENDITEM,
		"Name=compose_stat", "Value={\"user_track\":\"m|899|520|3|1;m|212|49|1|0;k|4888|7;m|805|114|1|1;m|203|68|1|0;m|203|7|1|0;m|201|8|1|1;c|331|0|729|124;m|72|8|1|1;c|324|0|729|124;m|283|2|1|1;m|405|18|1|1;m|205|3|1|0;c|243|0|738|143;k|1464|9;m|2167|63|1|1;m|210|113|1|1;m|206|1|1|0;c|301|0|662|297;k|2060|9;m|1896|103|1|1;m|204|233|2|1;m|201|115|1|0;m|203|130|1|1;m|203|96|1|0;m|201|3|1|0;m|407|22|1|1;m|201|3|1|0;c|441|0|582|897\",\"build\":\"release-fmail-15492.+053925-07-11T23_58_17\",\"serverTime\":1639558195769}", ENDITEM,
		"Name=delay_for_cancellation", "Value=true", ENDITEM,
		"Name=attaches", "Value={\"list\":[]}", ENDITEM,
		"Name=email", "Value={logsend}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value={token}", ENDITEM,
		LAST);
	lr_end_transaction("UC_19_Send", LR_AUTO);
		
	
	
	
	
	lr_start_transaction("UC_20_Thread");

	
	web_url("thread",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id=vDEXVCYw&email={logsend}%40mail.ru&htmlencoded=false&token={token}&_=1639737363297",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t127.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_20_Thread", LR_AUTO);


	
	
	
	
	
	lr_start_transaction("UC_21_Thread2");


	web_url("thread_2",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id=vDEXVCYw&email={logsend}%40mail.ru&htmlencoded=false&token={token}&_=1639737364625",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1&afterReload=1",
		"Snapshot=t136.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_21_Thread2", LR_AUTO);

	
	
	
	


	lr_start_transaction("UC_22_NaviData");

	web_url("NaviData_3",
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login={logsend}%40mail.ru&_=1640397239727",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/",
		"Snapshot=t141.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_22_NaviData", LR_AUTO);


	
	
	
	
	lr_start_transaction("UC_23_Logout");

	
	web_url("logout",
		"URL=https://auth.mail.ru/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/",
		"Snapshot=t160.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEMxAizSGe7W6Vma8a3PvXu_8vlzQ7ZCcS5_9Ao3Gm5S6iCBQvBK1IR3rHTKGR2j4T6Ow5uTAW4dKGoq1fjJmWxtFBNlOedCbJ1ZLgor8HdKZcc5KTqOwzANMcUbDb4iPZQXHyrr8ucdId5NdhOK0mGsdlYfbE0elaRM-smI-e6T_w3Hlx8AAAAcJHRIY7b6LhpvrDX3zmyg758FuhccEO3D96AHWyOijnxEocuWLmCR3fu5giCGM1UJ7KKEoTGI0WHubKohrDjTQSB00ibFaCfW_2kHZccgHDb6tX58LYwNYig3NWFpxfJjV5IvPgOvh4ei3Sc8vwIMfQIcJnwQEA8FpEnS1fbj5M.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://static.pulse.mail.ru/pulse-lenta-1.159.0.js", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=blocks&v=1&r=https%3A%2F%2Fe.mail.ru%2F&_=1640531630821", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=has-account&v=1&i=auth_false:1,mail_true:1", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://recostream.go.mail.ru/?stream_id=lenta_main_mail_ru_v1&with_profile=1&query_type=settings&_rand=zu44xcrw3y", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/un?uniq=WggFAAQvhgABCAAB5UAVAAEIAAH+QBUAAQgAAfjUhAIBOAcBurZ0AAE4BwE=&euniq=WwgCAPjUhAIBAYQBexMAAAkIAAE=&rnd=157765950", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://recostream.go.mail.ru/?use_orig_imgs=1&title_length=150&ver=1.159.0&n=12&stream_id=lenta_main_mail_ru_v1&query_type=recommends&_rand=x2ypu3gum8", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d795533.gif?rnd=387086834&ts=1639737370", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d79643050.gif?sz=15&_=1640477992112", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d2398075.gif?sz=15&rnd=159906837&ts=1639737370&sz=15", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://reklama.mail.ru/d17184638.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://recostream.go.mail.ru/?stream_id=lenta_main_mail_ru_v1&query_type=get_categories&_rand=jquyho5nwch", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d69886148.gif?sz=15&_=1640025797505", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XUPsTk0tAAAAQmNenof80JEkbv0vDU5uhG0w2xktC2fkW0UHRBnBTP9nrp4-UR_zKlTACWfvfjWi.gif?_=1640266658518", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8Xcjd1n0tAAAABYiPBv-jwvHNo4MiDFJ1Ftx0tlp5VZqbPLQHQEERpnBFqYiksA3YrneS5FNpBTdg.gif?_=1640676045728", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d1797086.gif?sz=15&_=1639772903361", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XdUuZGctAAAAGEhCfN3fJrzdY7yYeB_rZgPEN1efshf0q9zA-xhSTtP_M34JC-CcX_Yn1-xr_Dze.gif?_=1639801503492", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d90847282.gif?sz=15&_=1639836603942", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d83288630.gif?sz=15&_=1640587482612", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=33772932,703055&_=1640387078637", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XdcqbQ8tAAAAjOUAFfbJTN8kD4sZAQp4HOpbbZeXkVs90FoE7LEHBbZrUlZvQB24yOIcdGX5h7pH.gif?_=1639763218712", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XUjAMxwtAAAA7JA6WoUtiCdYzUqfGAzzkVMs83nH12Ic_nD696DgACjReOnZJvZcNjL4XZg0_PJz.gif?_=1640363221192", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XZhJFDMtAAAAkB3U9WDzOdH2tsjD6vXUPTovghMLmvN6Cv-sKcfLWpp5_-CRJCzf5O4NtSfXWB8U.gif?_=1640589484364", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://an.mail.ru/count/W8aejI_z8A45101q1dln9C8s4cPr1G2X0122836NTjLH0000062O2t3qz82G29010i010jW1YeSTw0600V02ZBgIiWQm0mAxFX5hjHTD1Qa7XgwDHmtt2axG1mBO5S6AzkoZZxpyOu4Ny3_u680PwHo07Ny704GWU2Y2NGh6MOWAOlZdoPmf1ciOK000~1,an.mail.ru,3656128131639737317,3496382637", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8Xa2spi4tAAAArwCPKK-BiUz0TONI-yDRJj2deJpOtATwqhy9y67tcocBgesBUxTzlEfl36etdUdL.gif?_=1640605286573", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XbVUOTgtAAAAA0bIPHtx6XydyIo_utOhmz3SUdTkXNTpYHyn1cKATpueGtdQpr-JqBT5sKY9Oi2O.gif?_=1640156562571", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XZv1W3gtAAAAvyDjGAsxhLl55kLEzfZFz1Yf5PDwEZqXyxxiwLfRxfnWelp3NASEUdBwNeUWqebQ.gif?_=1640645001360", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://bar.love.mail.ru/jsonp/bar?&_=1640500697389", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d660352.gif?sz=15&_=1640579928255", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/ds8xq6?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/sb36299732.gif?sz=15&_=1640043498128", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d44643181.gif?sz=15&_=1640030953944", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8Xe22PHQwAAAAxh_XEhIMn-eAemIrf1ICGs2074FlaZvZcq3N9ZaCgcGnHCABTFBDl8ndOiz6BdhZ.gif?_=1639904789039", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/h0c140?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d36299731.gif?sz=15&_=1640577808397", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://r3.mail.ru/k?fver=0&mh=e1fb13b71bb08e7db1960a28fa5f2914&js=1", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d27780154.gif?sz=15&_=1640382982979", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://b2.mail.ru/count/W8aejI_z8A45101q1dln9C8s4cPr1G2X0122836NTjLH0000062O2t3qz82G29010i010jW1YeSTw0600V02ZBgIiWQm0mAxFX5hjHTD1Qa7XgwDHmtt2axG1mBO5S6AzkoZZxpyOu4Ny3_u680PwHo07Ny704GWU2Y2NGh6MOWAOlZdoPmf1ciOK000~1,b2.mail.ru,3656128131639737317,4186794436", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGYNwSIBkM2WvFug3caKQ_DySu09csUAJ6A-OQGhB-ilSNyvCRHcEVk1hgzLTp6qiNPCZUOj17FDWpdFOxxVFWP3AC2mwSdssFzMiDgImcKcX6vfq9t-u102dnzusr2JU8dj63xbeaEbYyDYeFTxTFjrcqyORtKz9sEGDRIeafTNujIV3-BAAAAAk67yKCocQrDM6rcnpDRKI7InzKmOJqGbKtU3y2zrkgPQsnf-RgQAwSisOOcSU8ebBMWXh2Nhc3uXPn9ZFp-H2UYQ3P6Ab0R7QuQSBY4yZspWkFG8ygW-M3j6ORIhPzlqaLT2DZKFrtt6ejIkjUbwNGmBT3Diyzdu1wl47U9d3_8fQNdWEZdrB4FQHBFLKJO.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/y7s979?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/pqaft6?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/efn5v4?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/v6h9q7?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/koydy6?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d67755945.gif?sz=15&_=1639985003855", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XVwr_jstAAAAI--CceMowJ082IKQihGgAURRv-yMuDjAOMwKkwaIvzTxvFf-IbcdNtMFo5ZaFLWl.gif?_=1640595644734", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d36299749.gif?sz=15&_=1640459732174", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d77213059.gif?sz=15&_=1640723817593", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XeUfzHYtAAAA1ChIqX1L3QOP_Xk9DzMY7Fi8rqH1DeArZ6vJzxuBKg42znm6jI5CEi0RI8O1aFvK.gif?_=1640498852010", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGYNwSIBkM2WvFug3caKQ_DySu09csUAJ6A-OQGhB-ilSNyvCRHcEVk1hgzLTp6qiNPCZUOj17FDWpdFOxxVFWP3AC2mwSdssFzMiDgImcKcX6vfq9t-u102dnzusr2JU8dj63xbeaEbYyDYeFTxTFjrcqyORtKz9sEGDRIeafTNv896RmGAAAAz8hyV8IOQ9veEIyBVCP-Qck31z70kLHU2YVGpUp1MPblbXOgy3prVhBGvh2L6vj1PwoZHb1zfnMpRNw6FBbcOQwftXnQkLZeozYH0tdQOkXhI1UVxSe6H3oMdRMuvm23J-_aumhpMXx0s0FUQuFEDwfU_HgauiPaMihoWXsw7xkb7B-7qtSITg68PqdIaNov.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/curxh8?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/pllim0?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/k9iu14?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/z1q4a7?mt_campaign=mainvkmail&mt_adset=&mt_network=1&mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d69888407.gif?sz=15&rnd=350824210&ts=1639737380&sz=15", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEyxWN7FoQDTrlZPsi6Ytg_vE5zGBRh_HRwCmEJn_KB8UAvBWnJC_15rGQAo89Orlt2k6DlNuiiXGXMdTkoBp-QW2VWuu2tDdYw_tK4uL2c0nmZBWSWRqXRUccyumqrY-2189QmEsY6YiL4oZt45woqlkcjCFO4Y-jXx4yp6g4eqQaA3XJ4AAAAUoExkun1Z2JFt8pSeMS_I6Io3XcXCRUwPNsb9216A340T1_2oIRTSDm4PjeBTTC9kMcJ1rvDJyUjXQA9f6y7-BFVK9hTh97sPr8r-1RitlSiLvbH5f8jeDCOZDiQc7t66kxwk82dVW73V-oF3FPLxvKXAIIbol-yNqA4a0SMkSk.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFs9mT-8XPQWBDtKBBiEZRcgOUWUFs2_RfleqMEv2MmXHpReZxmYP53CGb8VD4Wo-MTbMia1fOQhXbKfqXWBLhjieSz03wGEmSbtvxYkB4el5HK2hZDuZof3ywb03MgOJlPNbVNw3VSoum0V7alNL2QWuROnpqd1uVplweNzC-jnriANl-AAAAAmeHFlcRJd-0ZELYkHvBwRC_EhU8eJM1s_-t9kWtu87WXl_YM0E3MY8nkXu2EwALb45rX7ctNqv3mfSnK0Ym0xJGYGBMVt2K9kWhGF4dcBAX5Dt8GMslo0p_6fhngyySVlo7lSmIaElOfQGjc1I8TDs2eAT6V8kWdb2OPWTWHLAA.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/hf90m3?_=1640420739654", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFs9mT-8XPQWBDtKBBiEZRcgOUWUFs2_RfleqMEv2MmXHpReZxmYP53CGb8VD4Wo-MTbMia1fOQhXbKfqXWBLhjieSz03wGEmSbtvxYkB4el5HK2hZDuZof3ywb03MgOJlPNbVNw3VSoum0V7alNL2QWuROnpqd1uVplweNzC-jnoaKPG2EAAAAKKnVKE2eRVvpBbJmzca0uFHa5UzBOUXzp-yA4d0nof6GGdNXti2ntaS1wy0M7PsKlxNnsKnLtxp3dnFDr02hFu4I0fUsAIqqgifGZOYNU2-AoeBDWtX2tIFZ7H1tBGxKah0O0sEkRSqScVFHAJRaRRFX9j8FxtSe_N2BWpKypBnyI5d6ZKFrGoI71cSQ0BwK.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/ac5sf6?mt_sub1=mail.ru&mt_sub5=2", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEyxWN7FoQDTrlZPsi6Ytg_vE5zGBRh_HRwCmEJn_KB8UAvBWnJC_15rGQAo89Orlt2k6DlNuiiXGXMdTkoBp-QW2VWuu2tDdYw_tK4uL2c0nmZBWSWRqXRUccyumqrY-2189QmEsY6YiL4oZt45woqlkcjCFO4Y-jXx4yp6g4eqXHR6Wt1AAAAO7eMoUcHg4s5y0cCdtG7pg7r6q9J4lmKw8V5YNzo95ijkFh024BZcyfHaNTPUeBOcvd8aQ7u8kQ-9YgCBXCCZhzbJRoFvj1snnb2iGTIaGBSO2XCy7l3H8Ezq_LFWC0BoXTZZbHeCfOWJSjtF1Sfy_ig7navnM0m9WddwaEkkHg.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFs9mT-8XPQWBDtKBBiEZRcgOUWUFs2_RfleqMEv2MmXHpReZxmYP53CGb8VD4Wo-MTbMia1fOQhXbKfqXWBLhjieSz03wGEmSbtvxYkB4el5HK2hZDuZof3ywb03MgOJlPNbVNw3VSoum0V7alNL2QWuROnpqd1uVplweNzC-jno-AtTOFAAAAFjM4uhdYPUub4UhQfVrVFw7Gjy8ZPAhf9lKvmomFwPrKtf5z_b9Xn_rt8Iz-Zpeq-SpJlwPcslVpjaEN8C4MjRVdLAHa4sIAXKb0QPKEmnCzRwbqdZKvtMUBaRVfLO4okq8bkH_5_IXOFPSzDHMB6fh5sATwhlV2N6S8aTdoLBFKF5iwR6H-58ib5lvqBfPB.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/ns.gif?n=360866022,360866021,362894341,360866036,361700283,360866045,360866006,360866032,360866010,360866029,360866019,364244819&_=1640581251205", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=33772943,703057,523187&_=1640350782415", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=61944424,61021866,61021863,61021862,61021861,61021860,61021859,61021858,61021857,90824763,61021856,61021854&_=1639764943928", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d66539296.gif?sz=15&_=1639866673894", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d66539295.gif?sz=15&_=1640647923844", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEap7V-lZkauWC63aU62d5k4cLVw9ukwam0n-NP-YHRAKyuu3BwfMtI6duM6ZdhRbMbW9zzCEc70pIJG9GSesHmThcJkeJgmJoXQd5bFppmZESa3_ePhE4piBddYcY98Sv_SORrmw4NvwY-wkUQRNSe3jhL-uxgeiyQTeprxCCVcYth-AfKAQAANShTtnWHJ2iALjzpdnqLCeZrl6eXRMg7tX78J03Y8Sxoh1PdDOId0QufoI45D2w9PfilL3WzWye710gK_6aN-fucAiA3m4LBDJjFeXMYBzZorj4vEN6cr_1ZdMsum-tYBXK-1_FChuWBQWtkbn1ikpCJXOffP9dGNiuA2iNZKYn2SyIz41nDirzpMMAvgi8z0_kLc2zWSxIfQNGMmLFjWfgexZCNDzhr4aeg1aBrNba7EQb5ZcDeUp8H_R_axC0HQ7F4IcUSs6TxmopJ9mfqP2ANckVvBlq2lwRy3dSoCj6DeJJ5P9Sn9yWi6EEXPEyLGQsMLaOu046DO9Ywvo-wvZCaUPC7IwpDIHWg9jV1odkvQZHtw2en7yjL_ZvsbPwf_SQaX3hkmjs0XKU0NZ667Qw8uSrSue1gsr3c6p-NZ1gQ38_A6-FnVW2MQeEl0ppiBsK4POCC1FpiF19Z-SC4mHSk8CM8uHm6dmpUYt9bwT5UDwyXElAi8tr8IpGYhD0maYznkKE78RV_r63FnpRfQ_XyyLjJCqQLv8Pn8pvj0MdPP0T1cUE2QUsamG60-bGSKIAKUq9K0jU7UKL2WW62BJpkVgVtlpcI2VVw__2zYMM.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d66539288.gif?sz=15&_=1640620997332", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGcbnaExRZ0SGd5b4vNoB9QQ0CEQqCmdLQBBgUGr5VxVfqYIEeW38xnE8V5boKQ_EThV1n-7DDebx4cb0nrLKgJfLxb537H30hhtfM1RoK7ids4xwNR9ILeF95DBcYNwM5TWRUH_AyamyZeXC9E9rKbozqq15yMQEY-zHhTpP0qmo1-DXvJAQAAQ10jTJBMFpE_MnqS-BEaLLgch-ja81Nnt5VX_aZSksx5x6tzJPnfGZh93UVSbfqjWRrFmv61Eywz19yUHuNlOmFz0OqCAIN3atCxGL3bh1jMTXF-1OEb7RmH424nRrLOeNoZk1bWl5d-KRAqEx34ujxoJcSBYI3_akoZSNmWtTEi34jVg7cYMatSYRR6pmhUm73tniBzFQ4HyGeadbnHnGw9fn3yTX_iPSKNZ1e-tL2em81RbJNpMOGJBWXVAtNLGsLA6efQoZY8UciBBxoG3PyOrtnL-q5euDDHRmDNdlB4JSg5NaUwd_uJYoHOQSLOVixuA679CDIGDp04-mHTZcmM0qMOupGVlowTzZIna-V9fNqd5HFxVPeMrygfoDWLk3ZyHYv8shYxLl0hQmnxzmI5MTbBzDPf8xveVdTmeEWBPEDBaicRP07ATcKx3nDc28dg8u0kQV2_mCviVP0xuS65E2Wk6FPXWE6A1_MrAImnXlJT7eGVfX8bxhqw6M0PiFlh4Oauz6jDVeejiA3buPXo8yGXjN5n4BE6jOhHjlkXBcF_7MpvzNSOSI48MacICIxwSSx-C2FSLaaC9CAI9QJvO3d914tBo65cELl81FU.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d69887902.gif?sz=15&_=1639975622620", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=error&v=1&rlog=resplash_error&rlog_message=other%3A%20Script%20error.%20in%20https%3A%2F%2Fr.mradx.net%2Fimg%2F58%2F4CE4B1.js%400%3A0%3Bgeo%3A%205573%3Bbuild%3A%20a2d117e%3Btest%3A%200%3Bkb%3A%200%3Babp%3A%200%3Bphs%3A%2075065835%3Bres%3A%20img%3Ahttps%3A%2F%2Fdmg.digitaltarget.ru%2F1%2F4024%2Fi%2Fi%2Cimg%3Ahttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fgen_204%3Flength%3D768%26loaderinit%3D3066%26nonreq%3D3067%26nonload%3D3221%26palv%3D1.13.3%26lid%3D1%26id%3Dpal_html5%26c%3D1017794981225023%26domain%3Dmail.ru%2Cimg%3Ahttps%3A%2F%2Fpulselb.relap.info%2Fopenrtb%2Fpixel.gif%3Fevent%3Dnurl%26r%3DChNqYmYyeDMwQkhPbWVrZnhEYWYwEgZPX3JXSHcaBmFTUy1PZyIGYkJ2eE5BKJ7Q8Y0GMldodHRwczovL3B1bHNlLm1haWwucnUvYXJ0aWNsZS8_c291cmNlX2lkPTg3MjM2NjkxOTI2ODU0MTEwOTMmZG9jX2lkPTE0MDcwNTg3MTA0OTcxOTMzNDg6BLDVM5BCCEZBS0UwVUlESosCChFSVTpCQTpyX1MxRk9JNGp1TRACQAJQ8z5g5PcIeg1wdWxzZV9hcnRpY2xlkAHg2r7nCsABAc0ByXb-P9IBA1JVQuUBAABgQO0BAAAoQZoCEzkwNzg3MzU5MTI3MjU3NzkwMTmiAhVsZW50YV9tYWluX21ha"
		"WxfcnVfdjGqAipmNWRlMjUxYzVlMmU4NzEyX3JlbGFwX2NvbW1lcmNpYWxfZnVsbH&r=https%3A%2F%2Fe.mail.ru%2F&_=1640425689041", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=error&v=1&i=other:1&r=https%3A%2F%2Fe.mail.ru%2F&_=1640076587613", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGYNwSIBkM2WvFug3caKQ_DySu09csUAJ6A-OQGhB-ilSNyvCRHcEVk1hgzLTp6qiNPCZUOj17FDWpdFOxxVFWP3AC2mwSdssFzMiDgImcKcX6vfq9t-u102dnzusr2JU8dj63xbeaEbYyDYeFTxTFjrcqyORtKz9sEGDRIeafTNktxxRuFAAAAB56L508B24qg417UqHNPJhu0IQuJSc01uaY4lj0FNd89-S1kgQpwETKL1ckEfPwWkwdUGYgtPQiOM6HF3jxevod8hwkjFEh_NmgpvS9566B2HQoC2El1ZxXxBFEBLerv3yJXihVSuIJDDPC3JN8tVhLWwKkxqTHI601sAUaAKsXqO2sSgHwv0fATRRb3qSb3.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gGYNwSIBkM2WvFug3caKQ_DySu09csUAJ6A-OQGhB-ilSNyvCRHcEVk1hgzLTp6qiNPCZUOj17FDWpdFOxxVFWP3AC2mwSdssFzMiDgImcKcX6vfq9t-u102dnzusr2JU8dj63xbeaEbYyDYeFTxTFjrcqyORtKz9sEGDRIeafTNk8KxUOGAAAA_qvkPEnV9NsuU0umzsB9jQ9G0c_HpHNcCGyFNALo6dJnEnvJ5e_7E1QIunrVdH1qNjrp0meOto-BRAVu0slZoCBghbYJenoDGyR9ZQDoKHfp-O0aZht3IYfC82OXVKEXdCo9SF7CH_3gyomttSsw2maa3q1bm59_yEMysMcLAJC_Ce9ulkMteQouNcrbj3bm.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8Xb5MkE03AAAAGSCsOhTLd31KELToJd7qpH-SvVx5Opao9fbXxoNxEaoSHdK442Kd00j3gQHjuzjYS8pmSY836IZ6ZvdPyp5p0w.gif?_=1640680350935", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuehcVIDSILbyHThypPWPEcG2Zy6GVZwbFlkGn0vgRFwnAAYBxYM__7qr41oVCbGVZpTNO3dC1grSvG-lLpzNJE1X-WWzpf4R875ZMP2sbCnMtUuJiDY-lSAAsXhYx56z4wFPMRjKOz-zbd1jjWVhDdaDnZBezmrjmMib2eMf8XeLf2VUtAAAArsdODxOuc-Fml5iSIZWM4R26B9ii0wNMUW2VdNwxUqO5faz_-TxmT4XtBhALna-1.gif?_=1640356953949", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/ns.gif?n=365393310,365392588,365385966,365386437,365389275,365393602,365389590,365376716,365367167,365387622,365390717&_=1640148149506", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFs9mT-8XPQWBDtKBBiEZRcgOUWUFs2_RfleqMEv2MmXHpReZxmYP53CGb8VD4Wo-MTbMia1fOQhXbKfqXWBLhjieSz03wGEmSbtvxYkB4el5HK2hZDuZof3ywb03MgOJlPNbVNw3VSoum0V7alNL2QWuROnpqd1uVplweNzC-jnqqmWCOFAAAAYEVwEfJGTwgfcxCUbqa44yVcCrZzIdiBXQOU1yzTOKyCpMpBkNlgTg1R5R4XB1uWqWAmD8boKm0AVhN8A5Fp1mZgnLJzTfm973Au_etglK08nBF7Dn3syhuMP7Ej_SbBn6A40k4s6R5aTBFw-8Ar17K5yTyMPSht3_AouRS4oNOmjU9PgAeGQrjhhHUSctr8.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEyxWN7FoQDTrlZPsi6Ytg_vE5zGBRh_HRwCmEJn_KB8UAvBWnJC_15rGQAo89Orlt2k6DlNuiiXGXMdTkoBp-QW2VWuu2tDdYw_tK4uL2c0nmZBWSWRqXRUccyumqrY-2189QmEsY6YiL4oZt45woqlkcjCFO4Y-jXx4yp6g4eqcNMtQB5AAAARbW-i9KDbaK5sLVF2LHjUF8WlT-oTWHq9rRNPasxhxh0O1unHkchOH9DRO1bMA7OjHFzfyLLeyjLjJjfwsYcJ77xB6SVVwSU9vhLCLw-agY5iiugL1JQPIuBi-eqjhkY-o7sVmdQkVjYjoA7TlHS4tcVg-Im8YzHKLc_CMpF8eI.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/d75990254.gif?sz=15&_=1640052658584", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEap7V-lZkauWC63aU62d5k4cLVw9ukwam0n-NP-YHRAKyuu3BwfMtI6duM6ZdhRbMbW9zzCEc70pIJG9GSesHmThcJkeJgmJoXQd5bFppmZESa3_ePhE4piBddYcY98Sv_SORrmw4NvwY-wkUQRNSe3jhL-uxgeiyQTeprxCCVcdY9tXTKAQAAoYxYJSI6ZJQxU4ZZlEPs6KbpyDf9uDH9vi-QEQktL2ywq3yGguQpoNBAdOGvrnraoBBtVJScsQK0fGTN_MiB5_qY5dEH_4nOF-8DTiw15u5efvxIwPwNC9vocgyyxdfZ8RkQRdmZC4I2x88UYEe0nxkiw-2e9ZLGdwn650_GFPDtxgQWDkGGwf1V2CGZy31C2bQ1AyM0YCkORk-Rnpg6Cs-vQ4z1PFEkD8FznhzIQucBD2lUVOCOcnpP1YOdB_FtMmMuma8fb3yejM7h7HbtBUeY_wXjLVu2xwNEnEV39bzPx3B4K9-VTHPFtqzJiWdK1IYXxmifHRERQ0m-qCdIo473EkA7xrC7tWcq0Uq95W5vYEmh5JKlCA4nuLqJeT_KjZQgfnHFwV3L23k1JL2-9_5LPIikP03Gf72Fr5VE78Spks09JItV8IWP_2dWHtElFkxv0ufdaXx2zJjJzAxnVllKu1UU2BzKbK4nmG89sv2mvjorunuJmWbiUL-SgQBEiktfu1YH7mber1Az6Jl-Kt04D36ziOMQer-bkqMuVktm3s6YYmkVhNSMfBbE_yB4_oSHaZnrSWInNSFMi8UXkdr5Bsj3_cT3j_5Uq6QnpRc.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEMl6lGfTPZVSXOv-3-p1bKD9Ckn3jgz1uRAslS8ahHFNk8KdlcbfU9VLl1zJQ99k1XSpHDnIvbH5hDzdn3lNjjOOJZqUKzGTY4dY_5tb45Bt9IUO8XyBDfPgSIOxugDfxKdNGqSiqdUEtKKogpXAA0bt98HS5No14u6m3T6_JscqUjRhSPAgAAsnjK848fadCgaer-sbL-EqcMO4Ck4tLwjkvYd7FVOoOTEYTn9x2FspSh4p7GPlaN945bUPYhJtdljxVqTREvnjynkzxEUaVPPGL3f-QnnD0xH6-j9dZBK2nYYvoZgvlNngygKIH1Ltikcwv0LCgBxJTkiSaHIQ5Zdnb0eZzq7P_hHNT5LkB18AH0IRdJg3Wq8MBmqV9FisiSEswMrYlkoiyurOl-_VzjNOLUCUh7C6PXvi1Rf1MsYgfoDbNaB4af-Ikw4xcPOMtg8KZbb-zjnAlJq0XJvCcAYM5GzRV5gQs9o17eHoS3Ht4AbWDOXiwQxwpHnXL6I2Mxe9By3RnqosDWi0cpaYirfEVJvuxR9xiAvRYiYzou3YyzkktErtLjQCEsg_tmTdqKFlrm6uanBVoSnA1W__MWBK4cHFmACjHM-izGgXvT-jMuk9i1y9xMGc_2FIoO_FIfPcg0h3M2Y1XJpSU4kXZFJWBmFmM49bnIggtfdW5FO6iVxcFW1fAIXu4f0KLpEscuqj8nx-iAZJB4lEZhVWdu-b7lAjNNHxBIHXQ2gUCCkad9opijQEM7x7zMEi-nZ7r3rU3EzUK4R4BuOKs9rN4z5_Z2d1GVlZ6c6Hg0J4LdOMpeMEPT5tpBRAZslFWXfGA1EWnPb2nNZXaA4gfyqv_XdsbmzDIoq55_G7TfP9FRfNjgIJpKc_qecokU2lH8iRWrG4bLHyE8cyIyZtvKVyW1k1Fqzq4Hl112DNPNak-yj03iHnTTp1BCg_SZLE92UNCh-FuC0dIMpqe6vZCWUcPBG5wHcd"
		"l6_xOA9gOGLOg8qNVuU9JbqA1kBu9NyJhE8F37pz3A1C8iODQNiZ-2f8cdgFQisNoeGZU.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEyxWN7FoQDTrlZPsi6Ytg_vE5zGBRh_HRwCmEJn_KB8UAvBWnJC_15rGQAo89Orlt2k6DlNuiiXGXMdTkoBp-QW2VWuu2tDdYw_tK4uL2c0nmZBWSWRqXRUccyumqrY-2189QmEsY6YiL4oZt45woqlkcjCFO4Y-jXx4yp6g4eqXI5yEN5AAAA2oCVa_kll4LpDUojSKOXGnsXQL93Ht-YMc7WFURc5ucDPWXGRgyWdp2IkAhHay954m2jDzdevL8L0BidpcWe0fJo0cr3Bm8H8WR0cxiM6uHog6usbTk8kY8c77A4YKaREBubFBRWUOaDodlPDWw1j_w2pU1MB78EcKMOtdlH7rM.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEFyPSIpZuBiaRMaPonBA8h_38hwg2jl_0mnPHncyAeyIliZZgNuvXxK6NEIa0Ia-rmo1fhtIr34D106w8F-yzC3UKCTfcYhFa5E8SvpC3GmmtR_2zXLsrT3-nFT2HllgMgvjXuyuMxeGTasNv13NpoERThF6DCjEwHUNlux_x2_LRvsgmlAgAAnofxIf0st49sq5Bqg1_8fdryq-sY6auovhy942X8DNgrc6wNhM39urpIhiTcYzupnROs9bhRokQOZDxM5rKL9t-aeIP3cXvPoOQD21iNaSaZ4KzzTOOYnE3ZNoN72OFSHXsFTcNWQPvFCJ3OC3Jc3kC7G817dPn6Y-UixPtMSZCAnsqmAsjpmHsPXHACwpBsldNs1AyIGRuonkoQRWFPEmCvKqEjZlMMhBbLp16l_251DYsAWJAuDGxdkEB1IDek7YjlMAjzcInNDryVJSomuAHL1F16ZwVm4mW5slKcz2CcaP_uX1TrzSTkH9-lyWK1tiMf5rtuK4prkboRm76YVbsmzTsMoyOfw3nQ-Nk1-CQl4ScjBi15dS9oTN0QmDppb85-xJCvULtD4YmKTuT_jD1gzJkag-l2lV5QgRyKXc4q3Li-hxUZWZ_76AR9bTPlAsWy_Uuv6BewzyOwy3kMWvolvLU6hTDkNDRiyzrdhSsG_dwBb9fOejWJSCvWRlyfvNAW7R8AAa1A0JQIwFuEobCWY6ZuyUeCFL9GdzSCWmX2xKtIBsFZ28jyYzP7mYASRJblf1rwTw7Dp4O646klR1dgm8iWxLgHe-9C2_HDFMpVpl4uAaLT4LFEUxw909ECRbSUlQVyNBuJS92-o7l_SW4xT20LJYmpu7HYpaZTO3xlzlKHiNfTMziQ1Yii2O3DzJJ0cZNMOCgYyHvST3p69iBSiHWT2HYrpwNBlG5Whnd6kCMRQqZ2QVxdTiMpd7baQpup3qdex1Cx4jpV7KIo2GO9uLpNuZzWA_7Rum"
		"F0vmTQ69_hfGgFnG4s5LDjx7QtxSWSIpxS6Cwk8ul5glm8T-JSv2WLSCy-CP-3clXaQaKqfzUSSXf_nXhzShusfDnMgLfE9BuSvPmK42pwTvk6kQ.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEyxWN7FoQDTrlZPsi6Ytg_vE5zGBRh_HRwCmEJn_KB8UAvBWnJC_15rGQAo89Orlt2k6DlNuiiXGXMdTkoBp-QW2VWuu2tDdYw_tK4uL2c0nmZBWSWRqXRUccyumqrY-2189QmEsY6YiL4oZt45woqlkcjCFO4Y-jXx4yp6g4eqQd3PD15AAAAttKbCnjoAkI3iLJlB4MYeEFgEhYs6s-BekWWp95ibUkPyqFnvUz91747XCt_UNdwJ0TWQMjNq39XXmxVQTZ3t8nOuzFOtvu7UFsRE1mLeM1hcP8nSwGQmDHNGNZaUo_1FB0jFBBjhbdgUKtCt7qrdIt6sGXNA3doiQsI1GfOP6U.gif", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=703061,666520&_=1640410157631", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/sb6111529.gif?sz=15&_=1640058552781", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/sb36299763.gif?sz=15&_=1639986285996", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/sb615190.gif?sz=15&_=1639830816274", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=logo-ok-onload&v=1&r=https%3A%2F%2Fe.mail.ru%2F&_=1640576054873", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=load&v=16914&i=connect:0,request:1171,parse:14597&r=https%3A%2F%2Fe.mail.ru%2F&_=1640686951075", "Referer=https://mail.ru/", ENDITEM,
		"URL=https://xray.mail.ru/update?p=resplash&t=auth_ok&v=232&r=https%3A%2F%2Fe.mail.ru%2F&_=1640548431091", "Referer=https://mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_23_Logout", LR_AUTO);

	
	
	

	
	lr_start_transaction("UC_25_NaviData4");

	web_url("NaviData_4", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&ok_counters=1&_=1640400464866", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		EXTRARES, 
		"Url=https://mail.ru/res/"
		"11c41524b1f0408530700000007065750510f0c0752540200540b5200010554570750075b04020c55065d0408035b5651545c09575251070654005704010351540306020905000903020a010f035a5604510c095c52530200540a5207010d51560601020e00010c010200010106575306540a09575251070654005704010351540306020905000903020a010f035a5604510c095c52530200540a5207010d51560601020e00010c010200010106575306540a09575251070654005704010351540306020905000903020a010f035a5604510c095c52530200540a5207010d51560601020e00010c010200010106575306540a09575d3c0f0352075"
		"2070104585d040b050a", "Referer=https://mail.ru/?from=logout", ENDITEM, 
		LAST);
	lr_end_transaction("UC_25_NaviData4", LR_AUTO);

	
	
	
	lr_start_transaction("UC_26_Info2");
	
	web_url("info_2",
		"URL=https://auth.mail.ru/api/v1/pushauth/info?login={logans}%40mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC_26_Info2", LR_AUTO);

	
	
	
	
	
	lr_start_transaction("UC_27_Auth2");

	web_custom_request("auth_2",
		"URL=https://auth.mail.ru/jsapi/auth",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://mail.ru/",
		"Snapshot=t186.inf",
		"Mode=HTTP",
		"Body=login={logans}%40mail.ru&password={passans}&saveauth=1&token={token1}&project=e.mail.ru",
		LAST);
	lr_end_transaction("UC_27_Auth2", LR_AUTO);

	
	
	
	lr_start_transaction("UC_28_Inbox3");

	web_url("inbox_3",
		"URL=https://e.mail.ru/messages/inbox/?back=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.ru/",
		"Snapshot=t193.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_28_Inbox3", LR_AUTO);

	
	


	
	lr_start_transaction("UC_29_NaviData5");

	web_url("NaviData_5",
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login={logans}%40mail.ru&_=1639968106318",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/",
		"Snapshot=t199.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_29_NaviData5", LR_AUTO);



	
	lr_start_transaction("UC_30_Alises");

	web_url("aliases_2",
		"URL=https://e.mail.ru/api/v1/aliases?email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737390098",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox/?back=1",
		"Snapshot=t200.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_30_Alises", LR_AUTO);

	


	
	lr_start_transaction("UC_31_Unread");

	web_url("unread_3",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737391225",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox/?back=1",
		"Snapshot=t207.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_31_Unread", LR_AUTO);




	
	lr_start_transaction("UC_32_Security");


	web_url("security_2",
		"URL=https://e.mail.ru/api/v1/golang/user/security?email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737392012",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1",
		"Snapshot=t210.inf",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("UC_32_Security", LR_AUTO);

	
	
	
	lr_start_transaction("UC_33_Short3");

	web_url("short_3",
		"URL=https://e.mail.ru/api/v1/user/short?email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737392013",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1",
		"Snapshot=t212.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://bar.love.mail.ru/jsonp/bar?&_=1640201160107", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_33_Short3", LR_AUTO);

	
	
	
	
	

	
	
	lr_start_transaction("UC_35_Unread4");

	web_url("unread_4",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737393743",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1",
		"Snapshot=t213.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gGVhxIE-HXI0V9FvoPYVmdueqG5ptgC91JinIo9mod-MDQW2C3S8Nv9h5GwgD_hVSkeYlE90U9iqE6IcmhY2Cp53OtQ3ZgNJqXuUSLlBgfT73GSc27zT39hX19AUbjA72igT16UOac_tJ4ujS1T3JjAR-_C2SRFSLW2UQ6wQTlbP1ofi0csAAAAYz4xVYjiQ3CaXGF3jkyUvAyO4ClnBtXyc0ugUToiGzkW8qzHBwW0IWT727wP0TCL.gif?_=1639916660449", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/ns.gif?n=360866022,360866021,362894341,360866036,361700283,360866045,360866006,360866032,360866010,360866029,360866019,364244819&_=1640597626345", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/y7s979?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/bulkstat/?type=imp&banner_ids=61944424,61021866,61021863,61021862,61021861,61021860,61021859,61021858,61021857,61021856,61021854&_=1640583607484", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/ds8xq6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/v6h9q7?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/z1q4a7?mt_campaign=mainvkmail&mt_adset=&mt_network=1&mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/pllim0?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/koydy6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://filin.mail.ru/pic?user={logans}@mail.ru&email=security@id.mail.ru&trust=true&sign=cf5d6ee3067f9cf953c2742153fd300c015e6ee0&width=90&height=90&name=Mail.ru", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://filin.mail.ru/pic?user={logans}@mail.ru&email={logsend}@mail.ru&trust=true&sign=cb3e3405516272f6d3d0d146b1d4f1f2fb6b461a&width=90&height=90&name=test%20nagr", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/curxh8?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/k9iu14?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/h0c140?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/pqaft6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/efn5v4?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://trk.mail.ru/i/ac5sf6?mt_sub1=e.mail.ru&mt_sub5=2", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_35_Unread4", LR_AUTO);

	
	
	
	lr_start_transaction("UC_36_Requests2");

	web_url("requests_2",
		"URL=https://e.mail.ru/api/v1/k8s/messages/search/requests?query=&limit=5&email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737394324",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1",
		"Snapshot=t214.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://filin.mail.ru/pic?user={logans}@mail.ru&email=welcome@e.mail.ru&trust=true&sign=ed3abace436778a16db69dd7b8f67a923a1a9372&width=90&height=90&name=%d0%9f%d0%be%d1%87%d1%82%d0%b0%20Mail.ru", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	
	lr_end_transaction("UC_36_Requests2", LR_AUTO);


	


lr_start_transaction("UC_37_Thread3");


	web_url("thread_3",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id=1:4e3791b5b6945712:0&offset=0&last_modified=1&force_custom_thread=true&use_color_scheme=1&email={logans}%40mail.ru&htmlencoded=false&token=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&_=1639737396847",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1",
		"Snapshot=t237.inf",
		"Mode=HTTP",
		LAST);
		lr_end_transaction("UC_37_Thread3", LR_AUTO);


		
		
	lr_start_transaction("UC_38_Hash");

	web_url("hash",
		"URL=https://e.mail.ru/api/v1/utils/sota/hash?token=be73068278c39cb88707fddb013e2c9f%3A6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206&email={logans}%40mail.ru&_=0.12503475136466957",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?back=1",
		"Snapshot=t247.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gFRfo3NfwDYaTXM7R_E7U5gATQs2BkYF7uhf6CUyPXqgQ1uWWN2P4hoa8QQNahD5G2mK1X39-jxdhnJbb2P4796XHCNjKm4z62gvc5m9TPA7-sunFWDxA7IrGQ5nxw0Gkrjdawj-Bw-xexJ9q5rUkLAjGSnhC4-tEHNkM9tpIUpJpoDq1p_AAAAUblEbVWuH6a4bitt0xSagY9VxGqF2RuTVMJapv0RqZDhZxeMr4PPQpHoNvqDhtM1xTBbD3zwH65N7T7hVMJth1v4FmRc14WpPKVcP1PAjQt86DjcUm9CPUJx_tLKFCsqnpyCn3SiV1trN20oTEZMpAMSlkDKuqGFhh4dU9iy61Y.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEfoOrP4TzgFxRkrSAkxyVDWRDymyvlwFduSj79YfzGCWDMxcWx97qm5Mex0lwqY8PTTg158DBhuNaCQ-piW6dvhsQrxkrPDzV5M7yfGSvKQYQ6l0blBnVjqd-tbt_a7aPSJfEcgXtkM4FdnJ5ZoKNYwOsCVZnpxRF0KqSwXfHZU0lNmjV4AAAAD5xfAvqOnGgmwYWoBR99YfHuuzluO1RoBVfcz1ExN4Gzp6I8fwHP5KorzlpWcoWxNOPDJAFV0rKTcXhWCnuZLH9yGszJiAfrbjZZa1kotfVhUKmc8Ve07G5MQD-p11US2AAJCiVP_K6-R5Tw0OHccBz7cAW4dg3VTrxgRPZaVys.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gF8BS_VI-ziuimBH9rySQmM5aA7G6NPtTwj6SUEyz-DZ2Oj1NIuRzeKG8oyiPW7o13w4pPa6FFy28YJI2dXP_b5V-mh8FOHB29XfAAMAaAv1S1OfVceqS4PycFhUIqlu7UnPOHy5aW-4OmIjH2P8YOeP5McSRBX7lnNiSlfjAxnPvHnlAWKAAAAAY_TLSbAXzFyFFcyn-ikQ_sQJAKQ_XMsdKIU5ePRivvu9bVl7ZCm4hLEIbJ0kYyVT9EwyrDL-0MruxXY6FGPbnnTLWQr83zPLbrWkwFtRElHfATymOMdinM5T0ikKSuxtZK4bohzMpRD0VS9Frrd3jywhee_TSicbje4yE_NplJhHebE9jFtUd5T4GljgI1K.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFRfo3NfwDYaTXM7R_E7U5gATQs2BkYF7uhf6CUyPXqgQ1uWWN2P4hoa8QQNahD5G2mK1X39-jxdhnJbb2P4796XHCNjKm4z62gvc5m9TPA7-sunFWDxA7IrGQ5nxw0Gkrjdawj-Bw-xexJ9q5rUkLAjGSnhC4-tEHNkM9tpIUpJnQcPRB-AAAAUeuqroQ8WX1nAKCMAWC6j-LGt1tJaYklrEqDPz_XY1o2sxIsU2MEHPgpZqldDZyBNbBof8YmqUtOXaX9Zbk5wrz1jhnVeYQvnEwD1Es2aat_vKLVwGYbad5EWP3Qa52wDsyy4Wn1zWIiiDD1oMvlehm1TvhVQBqECTmLH3-Krjw.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_38_Hash", LR_AUTO);

	
	
	
	
	
	lr_start_transaction("UC_39_Marks");


	web_submit_data("marks",
		"Action=https://e.mail.ru/api/v1/messages/marks",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t251.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=marks", "Value=[{\"name\":\"unread\",\"unset\":[\"16397373651946491774\"],\"folder\":0}]", ENDITEM,
		"Name=email", "Value={logans}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206", ENDITEM,
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gFzBgViBpY47ec6hb9pN44P7TYvJTy4I1Ews4h3USDOKb-nEzDGPQIuYOorbRZa4eRPLk-RNJVUnxr-2NhIzedK_Zzcm9LffkLGjUaIln7uFMQbKdpxEvU9KUv7-e4C2QB3pfIxJRttyH9fE9vsBBfygyoYTsOAynIjQ_OraM_RtOKxBgl9AAAAa4DBOFMUTJtt6R3CgNTi2nmXQu3VctMJFwzCAl-xlx7d4oHHXck6HIlGTvlxPgaIynZOGT9F1iOxHark8Yuh_e9RrHbbepmNz4AKgV6VtboPcn1PQVD5U1pf_jtRzPDvSG3LxAv3_6Htqva0PaYz9WxrH_mA9-5yewwUMqpU2rQ.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFynQgFtZSSe6WedTw25gsUfuk0dHjgWrFzyNBHxe69J1DDhRF-7x4TA3zsdHSChnpmnaSlS8E0UQyr6Ybw48jsD522j_zeQlp6uZ08mTM3B2YHgaFOHIwPW5O-JzbQovuW5sT5jlDKjd7mTsGBZyC1K1cyTuTWN-2nwnbAOw9Uf3QKwzZMAgAAvlhhkLxLDfgLy5wjzj9I3SxGUEIADCl3TCyaTOzM9x_hwH12opaWmuufvBsexnAtY5cxQj_kz0fPkprNvCgWPYJWqNN6Ov9hq-LvcSYAsr-m6NtRiOUqkpUsQjo4SsucpUFevctfOIprNwfytrfkp-9kfKPWAALTbZHkiC_15DhXBXcIR-53APVZoBEMgg_sygfApYLgRnTcUkxrOf-MtJSfMLJBCBawj0902GvXJXhRa9im3AhMPAeCvaWZTTEhDSevhanKe4_esJW4u-6AEozWm9tfLR7OIccAFYBMIItl33AIE_QtAiX-jZdKzHYsgJtV4G63kW7z9EqNKOOV5MIruHirTX7f4Wx70cqtpPnLl_p-PQ80Q--3ARNQdVNFvG6rS8g2CSnqfc74h568EPnYBREq1SSSXAXkT1pnbsbUamB53haXuNjSfgsMYFaOaogSvqyF6qRFpPEb2anJpTbmcN8I2c_hMuHJJZGcR0LI22IkXJEpF1uzv9vhPTGpqpiZ5oJPG3QcslKpSgrKpT-DWPvBdL2rrCI_XmMNHI4SozGo4n37cvVKyXAHaqeezqWqIqEAkgfTrgu1lX2VsXAzeQzXYTFi-7dEAyM0cLG-15czSesc9f0mt9l42dlSP50yiUZMgx3JUT3PlZnt7oU39pFIjSOH_UtUNJMP-0bthv4DX_DCZO8pBz8UZbi3PNIK7kmdItLpxjnuyV__69AFvdFfWcuzvsqNxTcrloT-v791thjK3DLwNzLf4RQSFrgJ-8v29FiItmEBdux8-A.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gF8BS_VI-ziuimBH9rySQmM5aA7G6NPtTwj6SUEyz-DZ2Oj1NIuRzeKG8oyiPW7o13w4pPa6FFy28YJI2dXP_b5V-mh8FOHB29XfAAMAaAv1S1OfVceqS4PycFhUIqlu7UnPOHy5aW-4OmIjH2P8YOeP5McSRBX7lnNiSlfjAxnPlaKblqKAAAAMq5c__7l6gWn4dxZrF5i-a1fVqoGlLlb2edThALN_Ex2EpeS4FbLPxECMELCKX1ffH7x9dg2rVcO26GhkODQ2hAo782_Tfz7QOF3RMDy3jbcS5ZlaiaWrHlj5mkEfa5lY8c8HmcRr0u2VVtUzx27SfolJIe07a5n6572-Ay24xBhFOQvDTFaDM17IGwaGirO.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFzBgViBpY47ec6hb9pN44P7TYvJTy4I1Ews4h3USDOKb-nEzDGPQIuYOorbRZa4eRPLk-RNJVUnxr-2NhIzedK_Zzcm9LffkLGjUaIln7uFMQbKdpxEvU9KUv7-e4C2QB3pfIxJRttyH9fE9vsBBfygyoYTsOAynIjQ_OraM_RtHCmOi58AAAAnKp6PkIpw1sM6pVk_hYfAaOZZOkS9ucLskuJ-o9etEhtW0ozNJ1H9CPAleDwN7S2-Sd7-2ENpl0SpFCGW2CO3PoYTtCM5TDSz8QdwYUI_rmaRTjkRzHOcjPZOAYSDx2gxhazsPha9DAnD1T9mR8XZIFLZtS0nz1jjzAEp6SByw8.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gE49vPxyF87RVT4DJE4yntTefgA17cwemB2bBasj4mtObqihsspUkhw1vK7ltMO4YuuUPT_85d5Uxdvx4wt0J4eiX_lSgVk1evJbnV82gBUg3RyRIHU9wceb6nUaf4l3WzuNhyieuQESFahz4cGcQZCn8-F8usFov_ISq9rCeYVQIHFCSkyAgAAQJdggrdrfuYvPBxvMZfsE9oOZtft0SZuc7pqcuNo2VQu0tlaky4gDU9Cur2Yt0dz5Gk4l8PWnyaA6tfJ5dTTYVmqm0sVmargmPTxUWoSnvbZ1cCkNtpl_cbCgxbDkgNe1ozJFkkRDqpWhw3vW96oQH_AjHX5JeEqvGUxMcicc02NNzsEsJ54VcYiXGBfblPEpCdmadc-o1IJ6pH6HeQJySAJ0p7EwBRQZejh8Q-0ykdTnhS_Lx_IvBMDzTRPhJkLfRZJYdOSRCM_o9yjqPJOZmfAWuFP4y1VYGtKEQ-p44zOyo_JAm91-EvwzGBPsfxwfAoN08CH8gMxCtNf-B-K-1Jw9jdp92yC3wBEt6Rzywl_uropGEbq_t0yjIzF298ynOTiADnepO6nrLW2PgvTPP3irh1nBTLM_YtwVYpK3xAwHTVY6MWLWgOMIvTBWorPX5nUHm4lmCSQs8SLtWcOXH0cDyMQozkLAOB9MSnD19sYxvgEFpTjlr3Gp1uCRVzkLXHUiNBy2rUvAI76ARM_h-YY8cuuU4qI3k7pi0GHuhLY_qr3BRf3KTqGwGBnmaEME60LnEAKEeyhwg5Yhchd2pwW9GyTSurmZG1x-QA3aHYL9yElQEknF1jIwoH6-XHvkFhiHSurBw0XOXy_g-yRJLKzRzNE-xft4NieZOIZXhXGs7ksKA531eusX2TFjXgWXJo6MbDI47fa0b6QPpJE6pXtUuPwpAmvZ1FqtXrRNv20iWO8D594bfngpc15bxdh.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFzBgViBpY47ec6hb9pN44P7TYvJTy4I1Ews4h3USDOKb-nEzDGPQIuYOorbRZa4eRPLk-RNJVUnxr-2NhIzedK_Zzcm9LffkLGjUaIln7uFMQbKdpxEvU9KUv7-e4C2QB3pfIxJRttyH9fE9vsBBfygyoYTsOAynIjQ_OraM_RtEOlmWN9AAAA5yHi1fftnmM4Km3vrc9qV_oUHBlMs_3y7s27CgFjb31sdr38onLUt4rGEhyY3vJrALx-1C2GVS5zxv4HeK89j6ClawjbCgAUxqdXbA8TXorVVRpCidVd817LyFwzKaRhZiiIivwPrSC92qipqK1kX78D_Z98Oxh1PRtAPDx-mt0.gif", "Referer=https://ad.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_39_Marks", LR_AUTO);

	
	
	
	
	
	lr_start_transaction("UC_40_Update");

	
	web_submit_data("update",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t252.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=index", "Value=199", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM,
		"Name=email", "Value={logans}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206", ENDITEM,
		LAST);
	lr_end_transaction("UC_40_Update", LR_AUTO);

	


	
	lr_start_transaction("UC_41_Short");

	web_submit_data("short_4",
		"Action=https://e.mail.ru/api/v1/user/short",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t255.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=email", "Value={logans}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=be73068278c39cb88707fddb013e2c9f:6304585c51455b64195657000a03070d00030b50060054570d0e03010354555d5207000a5c0a5209571654475c6e4206", ENDITEM,
		EXTRARES,
		"URL=https://filin.mail.ru/pic?width=90&height=90&email={logans}%40mail.ru&name=", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://filin.mail.ru/pic?width=45&height=45&email={logsend}%40mail.ru&name=", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_41_Short", LR_AUTO);

	
	
	
	
	
	
	
	lr_start_transaction("UC_42_Update2");


	web_submit_data("update_2",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t260.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=index", "Value=200", ENDITEM,
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", ENDITEM,
		"Name=email", "Value={logans}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=3929717862263664589521945105572612953507:6304585c51455b6419070b05000400020a020101030a010301030c0801000000040200090c0d06020706070e000201070e105146516d4409", ENDITEM,
		LAST);
	lr_end_transaction("UC_42_Update2", LR_AUTO);


	
	
	
	
	lr_start_transaction("UC_43_Send3");

	web_submit_data("send_2",
		"Action=https://e.mail.ru/api/v1/messages/send",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t262.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=from", "Value=nagr test <{logans}@mail.ru>", ENDITEM,
		"Name=id", "Value=8aC4f3E43A6C07d6f743eA194aF3441a", ENDITEM,
		"Name=source", "Value={\"draft\":\"\",\"reply\":\"16397373651946491774\",\"forward\":\"\",\"schedule\":\"\"}", ENDITEM,
		"Name=headers", "Value={}", ENDITEM,
		"Name=template", "Value=0", ENDITEM,
		"Name=sign", "Value=0", ENDITEM,
		"Name=remind", "Value=0", ENDITEM,
		"Name=receipt", "Value=false", ENDITEM,
		"Name=subject", "Value=Re: {tema}", ENDITEM,
		"Name=priority", "Value=3", ENDITEM,
		"Name=send_date", "Value=", ENDITEM,
		"Name=body", "Value={\"html\":\"<div>{messans}</div><div>&nbsp;</div><div>&nbsp;</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>nagr test<br>Отправлено из Почты <a href=\\\"https://trk.mail.ru/c/zzm979\\\">Mail.ru</a></div></div></div><div>&nbsp;</div><div>&nbsp;</div><blockquote style=\\\"border-left:1px solid #0857A6; margin:10px; padding:0 0 0 10px;\\\">Пятница, 17 декабря 2021, 15:36 +05:00 от test nagr &lt;{logsend}@mail.ru&gt;:<br>&nbsp;<div id=\\\"\\\"><div class=\\\"js-helper js-readmsg-msg\\\"><div><div id=\\\"style_16397373651946491774_BODY\\\"><div class=\\\"cl_753900\\\"><div>&nbsp;</div><div>{messsend}</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>test nagr</div></div></div></div></div></div></div></div></blockquote><div>&nbsp;</div>\",\"text\":\"{messans}\\n"
		"\\n"
		"\\n"
		"\\n"
		"\\n"
		"\\n"
		"ПОДП�\x98СЬ\\n"
		"--\\n"
		"nagr test\\n"
		"Отправлено из Почты Mail.ru\\n"
		"\\n"
		"\\n"
		"\\n"
		"\\n"
		"Пятница, 17 декабря 2021, 15:36 +05:00 от test nagr <{logsend}@mail.ru>:\\n"
		"\\n"
		"\\n"
		"\\n"
		"\\n"
		"{messsend}\\n"
		"--\\n"
		"test nagr\\n"
		"\\n"
		"\"}", ENDITEM,
		"Name=correspondents", "Value={\"to\":\"test nagr <{logsend}@mail.ru>\",\"cc\":\"\",\"bcc\":\"\"}", ENDITEM,
		"Name=folder_id", "Value=0", ENDITEM,
		"Name=sending", "Value=true", ENDITEM,
		"Name=compose_stat", "Value={\"user_track\":\"m|272|554|3|1;m|213|11|1|0;m|200|324|2|1;m|206|127|1|0;m|205|6|1|0;k|1648|9;k|1073|19;k|1466|9;m|1909|35|1|1;m|203|552|3|1;m|204|72|1|0;m|209|87|1|1;m|202|34|1|0;m|214|1|1|0;c|216|0|586|884\",\"build\":\"release-fmail-15492.+053925-07-11T23_58_17\",\"serverTime\":1639558195769}", ENDITEM,
		"Name=delay_for_cancellation", "Value=true", ENDITEM,
		"Name=attaches", "Value={\"list\":[]}", ENDITEM,
		"Name=email", "Value={logans}@mail.ru", ENDITEM,
		"Name=htmlencoded", "Value=false", ENDITEM,
		"Name=token", "Value=3929717862263664589521945105572612953507:6304585c51455b6419070b05000400020a020101030a010301030c0801000000040200090c0d06020706070e000201070e105146516d4409", ENDITEM,
		LAST);
	lr_end_transaction("UC_43_Send3", LR_AUTO);


	
	
	
	
	
	
	
	lr_start_transaction("UC_44_Thread4");

	web_url("thread_4",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id=XFlcg1xM&email={logans}%40mail.ru&htmlencoded=false&token=3929717862263664589521945105572612953507:6304585c51455b6419070b05000400020a020101030a010301030c0801000000040200090c0d06020706070e000201070e105146516d4409&_=1639737410477",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t263.inf",
		"Mode=HTTP",
		LAST);

	lr_end_transaction("UC_44_Thread4", LR_AUTO);

	
	
	
	
	
	
	
	
	
	
	lr_start_transaction("UC_45_Thread");

	web_url("thread_5",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id=XFlcg1xM&email={logans}%40mail.ru&htmlencoded=false&token=3929717862263664589521945105572612953507:6304585c51455b6419070b05000400020a020101030a010301030c0801000000040200090c0d06020706070e000201070e105146516d4409&_=1639737411561",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t275.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gFgRo44YN4f56x0__E8zE06i0aiDIgWdDpPyy_ak3r0uG3FcCZqNlTcK9cjWvo4-tHQBqhGz3XCuhbFPlRt7qNARamotzrewr69shxCc3WEKBLsNGWCN-cCi-HhcJ-7z10sprXKwai9q92ByqdmqH_FBjXJtRJcZA_LEiQZiGJ81qznsjmGAAAAw9WMpteZKbrXA2J9Elf_hEvQOHdjGT2Qb-L3Q_G5U-5WmsvVTa6scuJHSNIRV75KfBGRAPQ_HWDU0_8jpiQJ32MiwlozehmZjdj2MvCJ9fKsM46xPLjNpo6qqXSKuYN1pU0Abiw5AzFfpSQ5r4-xWKYa1tgLyOpDUbLAVVyvA3wZRNcZ9uQrFw8JFv70t2mh.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_45_Thread", LR_AUTO);

	
	
	
	
	
	
	lr_start_transaction("UC_46_Force2");

	web_url("force_2",
		"URL=https://e.mail.ru/api/v1/messages/delivery/force?cancellation_token=AG_p4WySaJKLsVzZBm51ukvP&email={logans}%40mail.ru&htmlencoded=false&token�=3929717862263664589521945105572612953507:6304585c51455b6419070b05000400020a020101030a010301030c0801000000040200090c0d06020706070e000201070e105146516d4409&_=1639737413374",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/1:4e3791b5b6945712:0/?back=1",
		"Snapshot=t285.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/pixel/AACD8gEuTdOE--Tyft8WYnA1-I1htay0MmnJ3MRM09MIbSVg67FIf9KaS4eJ8lM0FWaWnedXurAYMiEAm37LggZlyWJepYddDYhmtk_2kWOYxV1SaZ6hPCeW-n7S6-hyUDXOJ4iyzUMqj6E4-HxsupUMr12XlzuYKzj8LEKXeFz5Q-TxOY9UzVY2AgAARiYG7yXlCXKvKsjNC2nLkYsjzQH5JO66_JRoPdBqBvv1tM7fHX_1zsKZd8GSuWxkM-B9ZlOdg2UppcVxbQloCJDryS0QeOAlD3z4Lg24YZHuWpORiLZe2XEbNTQjkXVGmlTocWP2hkCjPipVWY8qxFBYvCLzGy_mF6ITmrXcW96RPdRRfmvakyp7jXr0DdHmMYmcAqFkIRH9vHWBj56YkcfeylvFUDOjBeDr2cNKi740V9YNiIOEe1B7m97MiW1UASjUHS9Yil793H7Lr-n1v-WHyaH-PR8KzQU9bPz3DX4KQi_1cN8yDYqNH0DMj0vP8T1rqPlU2CyMK6txSUyORK51bJd56zBOc3xBXNC6bFXw9GimBItmB7wE68bEJPQEXfACQrXfCVA5mf_ojz4gKaowvgYTWkcdoQ1zP7qo6lDL8lMhFqFWEL-sG7_4ab_E6od7LRbChsiCF_0bWJ0zOhE1vI2xu5J3MKmW1PnKVIP337NX3uGLFt8U6u7NLbT-e1TIx7UR1mR46uVssrvM7yWi4KqZEf7ZFWzQzsWL289VugU-V1fzf02bwJYmfCAJp3m0mC1xFUxSVE90SF-5Jf3dn3TKriZGk60Inbku3hutf6z5Nbu-J30EpSg_D1q1vLqi00cuyXpAeLiEpvPI2FtiR6gE3dsRyZf8XLPCywXVib0UvbBYkMwvwbGI5djQZBGiLcwWRFejfDFGXYJO3-V-Zbi-om8KoVKOlrmSYZ4WZR9YUf73EUBBUI-g4cgW.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFgRo44YN4f56x0__E8zE06i0aiDIgWdDpPyy_ak3r0uG3FcCZqNlTcK9cjWvo4-tHQBqhGz3XCuhbFPlRt7qNARamotzrewr69shxCc3WEKBLsNGWCN-cCi-HhcJ-7z10sprXKwai9q92ByqdmqH_FBjXJtRJcZA_LEiQZiGJ81gaeV314AAAAdmafYqs5BC0xHyImJezzlJosFkYdhVkDUbfTD4w9scQexCfE0sHq1sfAVn9336lr2zwZHT-y6Hel52EZhpMOjLWBUDpHUG-qzPcyVooovSRjy8CU42dFhG9wX946uD7lL7_kdpdUOrMykf1WDqgrYHM9tiUSuKWMpucMR3soXao.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFgRo44YN4f56x0__E8zE06i0aiDIgWdDpPyy_ak3r0uG3FcCZqNlTcK9cjWvo4-tHQBqhGz3XCuhbFPlRt7qNARamotzrewr69shxCc3WEKBLsNGWCN-cCi-HhcJ-7z10sprXKwai9q92ByqdmqH_FBjXJtRJcZA_LEiQZiGJ81hiBlFF4AAAA3H9a_HF67Wf4ebsMEZMp7A5F5eW7N4f_uqOEDDW7B24syG2jMeCl8udGbNhU_3dh3d7KxoaI9hBN9mFVkt0uDKSk8lE80PPJsVMJPSIJehU7osEIEwq38xc7vWcn9S_a-oZyMLn4fFs9zLfPmnwmiomzvikYsLMVVaTXXSP_baQ.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFgRo44YN4f56x0__E8zE06i0aiDIgWdDpPyy_ak3r0uG3FcCZqNlTcK9cjWvo4-tHQBqhGz3XCuhbFPlRt7qNARamotzrewr69shxCc3WEKBLsNGWCN-cCi-HhcJ-7z10sprXKwai9q92ByqdmqH_FBjXJtRJcZA_LEiQZiGJ81hUqUX5_AAAAFZcpf7gK55stOAAZNTY_VjGOV58d6EiStyBcT3uMr9Ln2pFqC5xoYSJ5yfrQL64alzop9Z74vhsnvHpiqRdqoQOXgBb1guvODkNiuvEiYBfCLWyx9LH_Xq1sUkzmtvs2BVk5wFBx9NFCG1yx44Me6PEb_kSFjbKCvQLA2d12bFI.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gFgRo44YN4f56x0__E8zE06i0aiDIgWdDpPyy_ak3r0uG3FcCZqNlTcK9cjWvo4-tHQBqhGz3XCuhbFPlRt7qNARamotzrewr69shxCc3WEKBLsNGWCN-cCi-HhcJ-7z10sprXKwai9q92ByqdmqH_FBjXJtRJcZA_LEiQZiGJ81kLsZEZ_AAAA0SV3DXtmEefotxqRn6sydihbVyDIvezIBo7iDPa9ruaYDJcS2L5No1JIxpO2BhqRsHLc8E7RTEpqyZI8cdy67Wca0Z_X5q-04pjmtNMAjRWsjnqo0mo8YRSMDo6k4x4d4BRp4FL3Y3pBcV8HwVqQ2VSbTt2MAajeEZyd3GhVYJY.gif", "Referer=https://e.mail.ru/", ENDITEM,
		"URL=https://rs.mail.ru/pixel/AACD8gEuTdOE--Tyft8WYnA1-I1htay0MmnJ3MRM09MIbSVg67FIf9KaS4eJ8lM0FWaWnedXurAYMiEAm37LggZlyWJepYddDYhmtk_2kWOYxV1SaZ6hPCeW-n7S6-hyUDXOJ4iyzUMqj6E4-HxsupUMr12XlzuYKzj8LEKXeFz5Q-TxOcyeqwAdAgAAA1MujMnmY40aEa3i6ChJTIoJdtOpRii3medVKSXEKZN_h0Pz-h162jbmD-C3lPz5gjVj3GXCQVLGRMPTxbYJC3lVDkOqWms1AGF5zpReSekbC7HXu10rq1w9xZQhIVSVNXF56iHZMvq6_L5Ze21drWXZCPlvEc8UBRv8xxRspo5m5UiZfawp-sTF2rZGzpxhnnETDjXxr4xynSgsOwHZ9og4szIsSOl6d-skHh1jgH38s-or4Fhmw4IIVOGtXVqPQixeLpf7qe364OnUFxjLU0rAyZXw3GjWjc7304imE94BB9l9wCLx6-IYCCCrdm3Mv6fBmklfBxKT5PaXu00jTh9xo8sTDb0QvKlj9FtPTxxKhEWG6xq9LF1m0a-sYpA3flXDOgWz3kq16LARQ7vwvTvSGLowo4gcwgEgetdAkJV5dZ657t13OY_WhEQh70O9ugco1H6TlSpuaxdtwll2UMXKWXlPJ56cs2dp7I6hrbbMroFlbaTLnJvyLkY7CEcCgw7PM7HRfkv6Jy9vXaJhO_kes5PHCWlTo4XagmTYHW57nH8Qub0giw47QqvjRdVc-bzjDLDPBYNPPfOaPYs8sVjO_sxiYot4UilXSJxJmmKm1bAEew24BZ2V9TDNwmxjlD_HrdBU1RCV9jKRAJx4KAPpavAZPLaMAgmbl1WquJ3AbN6Cb2Jiv6BuPnCLrUA4LllfDXAFiSYhQtlFtcRP8A.gif", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_46_Force2", LR_AUTO);


	
	
	
	
	
	lr_start_transaction("UC_47_NaviData6");

	web_url("NaviData_6",
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&Login={logans}%40mail.ru&_=1640184508065",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/",
		"Snapshot=t287.inf",
		"Mode=HTTP",
		EXTRARES,
		"URL=https://rs.mail.ru/d1126003.gif?sz=42&_=1639863645322", "Referer=https://e.mail.ru/", ENDITEM,
		LAST);
	lr_end_transaction("UC_47_NaviData6", LR_AUTO);

	
	
	
	
	lr_start_transaction("UC_48_Logout2");


	web_url("logout_2",
		"URL=https://auth.mail.ru/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/",
		"Snapshot=t306.inf",
		"Mode=HTTP",
		LAST);
lr_end_transaction("UC_48_Logout2", LR_AUTO);




lr_end_transaction("0_MAIL", LR_AUTO);

	return 0;
}