##############################
# Country definition for CXB #
##############################

country =
{ tag                    = CXB
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  puppet                 = CHI
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1442 # Golmud

	research_mod = 1.00
	peacetime_ic_mod = 0.8

  manpower               = 200
  dissent                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 10
    interventionism   = 3
  }
  nationalprovinces      = { 1273 1440 1441 1442 1443 1444 2802 2804 2805 2806 2807 2808 2809 2810 2811 2955 2956 2958 2959 2960 2961 2963 2803 }
  ownedprovinces         = { 1273 1440 1441 1442 1443 1444 2802 2804 2805 2806 2807 2808 2809 2810 2811 2955 2956 2958 2959 2960 2961 2963 2803 }
  controlledprovinces    = { 1273 1440 1441 1442 1443 1444 2802 2804 2805 2806 2807 2808 2809 2810 2811 2955 2956 2958 2959 2960 2961 2963 2803 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 
                             1010 1100
                             6050 6010
                             7410 1900 
                           }
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = U70 value = 120 }
    relation = { tag = U95 value = 120 }
  }
  headofstate            = { type = 9 id = 504001 }
  headofgovernment       = { type = 9 id = 504002 }
  foreignminister        = { type = 9 id = 504003 }
  armamentminister       = { type = 9 id = 504004 }
  ministerofsecurity     = { type = 9 id = 504005 }
  ministerofintelligence = { type = 9 id = 504006 }
  chiefofstaff           = { type = 9 id = 504007 }
  chiefofarmy            = { type = 9 id = 504008 }
  chiefofnavy            = { type = 9 id = 504009 }
  chiefofair             = { type = 9 id = 504010 }

  # ######
  # XIBEI SAN MA OOB
  # ######
 landunit =
  { location = 1273 # 銀川
    name     = "國民革命軍第11軍 "
    leader   = 504004 # 馬鴻逵
    id       = { type = 22200 id = 1011 }
    division =
    { experience = 30
      id         = { type = 22200 id = 168 }
      name       = "陸軍第168師（西北三馬） "
      type       = infantry
      strength = 90
      model    = 37
      extra    = police
    }
    division =
    { experience = 10
      id         = { type = 22200 id = 810 }
      name       = "陸軍新編第7師（西北三馬） "
      type       = infantry
      strength = 30
      model    = 37
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1272
    name     = "國民革命軍第81軍 "
    leader = 504005 # 馬鴻賓
    id       = { type = 22200 id = 1081 }
    division =
    { experience = 30
      id         = { type = 22200 id = 35 }
      name       = "陸軍第35師（西北三馬） "
      type       = infantry
      strength     = 80
      model    = 37
      extra    = police
    }
    division =
    { experience   = 10
      id           = { type = 22200 id = 835 }
      name         = "陸軍獨立第35旅（西北三馬） "
      type         = infantry
      strength     = 30
      model        = 37
    }
  }
  landunit =
  { location = 1273 # Xining
    name     = "國民革命軍第82軍 "
    leader = 504006 # 馬步芳
    id       = { type = 22200 id = 1082 }
    division =
    { experience = 30
      id         = { type = 22200 id = 100 }
      name       = "陸軍第100師（西北三馬） "
      type       = infantry
      strength     = 60
      model    = 37
      extra    = police
    }
  }

  landunit =
  { location = 1273 # Xining
	name     = "騎兵第5'西北哥薩克'軍 "
	leader   = 504007 # 馬步青
    id       = { type = 22200 id = 1205 }
    division =
    { experience = 80
      id         = { type = 22200 id = 9 }
      name       = "騎兵第5師（騎5軍-西北三馬） "
      type       = cavalry
      strength   = 100
      max_strength = 100
      model = 13
      extra    = engineer
    }
    division =
    { experience = 60
      id         = { type = 22200 id = 1311 }
      name       = "騎兵暫2師（騎5軍-西北三馬） "
      type       = cavalry
      strength   = 100
      max_strength = 100
      model = 13
      extra    = engineer
    }
    division =
    { experience = 60
      id         = { type = 22200 id = 1312 }
      name       = "騎兵暫3師（騎5軍-西北三馬） "
      type       = cavalry
      strength   = 100
      max_strength = 100
      model = 13
      extra    = engineer
    }
  }

 landunit =
  { location = 1277 # 蘭州
    name     = "甘省綏靖公署 "
    id       = { type = 22200 id = 41277 }
    division =
    { id       = { type = 22200 id = 51277 }
      name     = "蘭州綏靖公署 "
      type     = militia
      strength     = 80
      model    = 9
    }
    division =
    { id       = { type = 22200 id = 71277 }
      name     = "甘肅保安總隊 "
      type     = militia
      strength     = 80
      model    = 9
    }
  }

 landunit =
  { location = 1443 # 西寧
    name     = "青省綏靖公署 "
    id       = { type = 22200 id = 41443 }
    division =
    { id       = { type = 22200 id = 51443 }
      name     = "西寧綏靖公署 "
      type     = militia
      strength     = 70
      model    = 9
    }
    division =
    { id       = { type = 22200 id = 71443 }
      name     = "青海保安總隊 "
      type     = militia
      strength     = 70
      model    = 9
    }
  }
landdivision = {
	dormant = yes locked = yes
        id = { type = 22200 id = 2800 }
        name = " 内蒙古防御线 "
	type = garrison
	model = 1
	strength = 100
	extra = artillery
	brigade_model = 2
        experience = 20
	}
landdivision = {
	dormant = yes locked = yes
        id = { type = 22200 id = 2900 }
        name = " 内蒙古防御线 "
	type = garrison
	model = 1
	strength = 100
	extra = artillery
	brigade_model = 2
        experience = 20
	}
landdivision = {
	dormant = yes locked = yes
        id = { type = 22200 id = 3000 }
        name = " 内蒙古防御线 "
	type = garrison
	model = 1
	strength = 100
	extra = artillery
	brigade_model = 2
        experience = 20
	}
}
