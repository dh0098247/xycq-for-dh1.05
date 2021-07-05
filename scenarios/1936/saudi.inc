##############################
# Country definition for SAU #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  capital                = 1807

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 150
  transports             = 25
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 1804 1805 1807 1808 1809 1818 1821 3911 3912 3913 3914 3915 3916 }
  ownedprovinces         = { 1804 1805 1807 1808 1809 1818 1821 3911 3912 3913 3914 3915 3916 }
  controlledprovinces    = { 1804 1805 1807 1808 1809 1818 1821 3911 3912 3913 3914 3915 3916 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 1010 1100 7430 }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = AST value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }

  landunit =
  { location = 1807
    name     = "沙特阿拉伯皇家第1军 "
    id       = { type = 22600 id = 1 }
    division =
    { id   = { type = 22600 id = 2 }
      name = "皇家第2骑兵师 "
      type = cavalry
    }
    division =
    { id   = { type = 22600 id = 3 }
      name = "皇家卫队 "
      type = motorized
    }
    division =
    { id   = { type = 22600 id = 4 }
      name = "皇家第1'麦地那'骑兵师 "
      type = cavalry
    }
  }
landunit = {  location = 1807  id = { type = 22600 id = 5 } dig_in = 20 name = "首都要塞基地 "
division = {
                locked = yes
		id = { type = 22600 id = 6 }
		name = "利雅得要塞群 "
                experience = 100
		type = garrison
		model = 3
		extra = b_09
		brigade_model = 3
		strength = 100
		}
	}
}
