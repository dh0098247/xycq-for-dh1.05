##############################
# Country definition for MAN #
##############################
province = {
  id = 1379 # 濱江（哈爾濱）
}
province = {
  id = 1389 # 奉天（瀋陽）
}
province = {
  id = 1390 # 長春（新京）
}

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  puppet             = JAP
  control            = JAP
  capital            = 1390 # 長春（新京）
  dissent            = 15
  manpower           = 500
  research_mod           = 1
  peacetime_ic_mod       = 0.9
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 800
  money          = 200

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
    relation = { tag = U01 value = -75 }
  }

  nationalprovinces      = { 1374 1375 1377 1378 1379 1380 1381 1382 1387 1388 1389 1390 1394 1395 1396 1397 1401 1402 1403 1530 1623 1779 2624 2877 2878 2879 2880 2882 2883 2884 2885 2886 2887 2888 2889 2890 2876 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2921 2922 2923 2924 2925 2926 2927 2928 2929 2930 2931 2932 2933 2934 2935 2936 2937 2938 2920 }
  ownedprovinces         = { 1374 1375 1377 1378 1379 1380 1381 1382 1387 1388 1389 1390 1394 1395 1396 1397 1401 1402 1403 1530 1623 1779 2624 2877 2878 2879 2880 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2931 2932 2933 2934 2935 2936 2937 2938 2876 }
  controlledprovinces    = { 1374 1375 1377 1378 1379 1380 1381 1382 1387 1388 1389 1390 1394 1395 1396 1397 1401 1402 1403 1530 1623 1779 2624 2877 2878 2879 2880 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2931 2932 2933 2934 2935 2936 2937 2938 2876 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5670 1010 1100 2280 2290 2420 2540 6050 6010 6020 7410 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 58001 } # 爱新觉罗·溥仪 
  headofgovernment       = { type = 9 id = 58014 } # 郑孝胥
  foreignminister        = { type = 9 id = 58088 } # 张燕卿
  armamentminister       = { type = 9 id = 58086 } # 爱新觉罗·熙洽
  ministerofsecurity     = { type = 9 id = 58085 } # 星野直树
  ministerofintelligence = { type = 9 id = 58082 } # 板垣 征四郎
  chiefofstaff           = { type = 9 id = 58007 } # 吉興 
  chiefofarmy            = { type = 9 id = 58055 } # 邢士廉 
  chiefofnavy            = { type = 9 id = 58062 } # 尹祚乾 
  chiefofair             = { type = 9 id = 58074 } # 曹秉森 
  dormant_ministers      = { 58075 58076 58077 58078 58079 58080 58081 58084 58092 }

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "滿洲國第1奉天軍區 "
    location = 1389
    division = {
      id             = { type = 28500 id = 2 }
      name           = "滿洲第1軍區警備軍 "
      type           = militia
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 28500 id = 8 }
    name     = "滿洲國第2吉林軍區 "
    location = 1389
    division = {
      id             = { type = 28500 id = 9 }
      name           = "滿洲第2軍區警備軍 "
      type           = militia
      strength       = 60
    }
    division = {
      id             = { type = 28500 id = 13 }
      name           = "滿洲第2軍區騎兵獨立旅 "
      type           = cavalry
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 28500 id = 16 }
    name     = "滿洲國第3齊齊哈爾軍區 "
    location = 1382
    division = {
      id             = { type = 28500 id = 17 }
      name           = "滿洲第3軍區警備軍 "
      type           = militia
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 28500 id = 23 }
    name     = "滿洲國第4哈爾濱軍區 "
    location = 1379
    division = {
      id             = { type = 28500 id = 24 }
      name           = "滿洲第4軍區警備軍 "
      type           = militia
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 33 }
    name     = "滿洲國第5熱河軍區 "
    location = 1374
    division = {
      id             = { type = 28500 id = 34 }
      name           = "滿洲第5軍區警備軍 "
      type           = militia
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 28500 id = 35 }
    name     = "滿洲國皇家禁衛軍 "
    location = 1390
    division = {
      id             = { type = 28500 id = 36 }
      name           = "滿洲黃旗親衛 "
      type           = motorized
      model          = 1
      extra          = artillery
      brigade_model  = 1
      strength       = 90
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 37 }
      name           = "滿洲白旗親衛 "
      type           = motorized
      model          = 1
      extra          = engineer
      brigade_model  = 1
      strength       = 90
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 38 }
      name           = "滿洲紅旗親衛 "
      type           = infantry
      model          = 1
      extra          = police
      brigade_model  = 1
      strength       = 90
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 39 }
      name           = "滿洲藍旗親衛 "
      type           = infantry
      model          = 1
      extra          = police
      brigade_model  = 1
      strength       = 90
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 28500 id = 40 }
    name     = "奉天警備司令部 "
    location = 1389
    division = {
      id             = { type = 28500 id = 41 }
      name           = "奉天警備衛戍師 "
      type           = infantry
      model          = 1
      extra          = police
      brigade_model  = 1
      strength       = 90
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 42 }
      name           = "奉天城防軍 "
      type           = infantry
      model          = 0
      extra          = police
      brigade_model  = 0
      strength       = 90
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 43 }
      name           = "奉天保安軍 "
      type           = infantry
      model          = 0
      extra          = police
      brigade_model  = 0
      strength       = 90
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 28500 id = 44 }
    name     = "哈爾濱警備司令部 "
    location = 1379
    division = {
      id             = { type = 28500 id = 45 }
      name           = "哈爾濱警備衛戍師 "
      type           = infantry
      model          = 1
      extra          = police
      brigade_model  = 1
      strength       = 90
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 46 }
      name           = "哈爾濱城防軍 "
      type           = infantry
      model          = 0
      extra          = police
      brigade_model  = 0
      strength       = 90
      locked         = yes
    }
    division = {
      id             = { type = 28500 id = 47 }
      name           = "哈爾濱保安軍 "
      type           = infantry
      model          = 0
      extra          = police
      brigade_model  = 0
      strength       = 90
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 28500 id = 48 }
    name     = "滿洲國興安軍 "
    location = 1379
    division = {
      id             = { type = 28500 id = 49 }
      name           = "興安軍騎兵師"
      type           = cavalry
      model          = 1
      extra          = police
      brigade_model  = 1
      strength       = 90
    }
  }

  landdivision = { dormant = yes id = { type = 28500 id = 51 } name = "皇家禦林禁衛軍 "  type = cavalry model = 24 strength = 100 experience = 25 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 28500 id = 52 } name = "皇家禦林禁衛軍 "  type = cavalry model = 25 strength = 100 experience = 45 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 28500 id = 53 } name = "禦林軍突擊隊 "  type = bergsjaeger model = 0 strength = 100 organisation = 50 morale = 80 experience = 20 extra = engineer brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 28500 id = 54 } name = "正白旗第壹牛錄 "  type = mechanized model = 19 strength = 100 extra = b_23 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 28500 id = 55 } name = "正白旗第贰牛錄 "  type = mechanized model = 19 strength = 100 extra = b_23 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 28500 id = 56 } name = "正白旗第叁牛錄 "  type = mechanized model = 19 strength = 100 extra = b_23 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 28500 id = 57 } name = "正白旗第肆牛錄 "  type = mechanized model = 19 strength = 100 extra = b_23 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 28500 id = 58 } name = "正白旗第伍牛錄 "  type = mechanized model = 19 strength = 100 extra = b_23 brigade_model = 4 } 
}
