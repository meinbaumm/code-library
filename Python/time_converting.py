"""
Keeping track of time is very helpful. 
I have written some simple formulas to convert minutes into hours, 
hours into days, and so on, so that time is easier to add up and analyze.
"""


def minutes_to_hours(minutes):
  how_many_hours_in_minutes = minutes / 60
  h_part = how_many_hours_in_minutes // 1
  m_part = how_many_hours_in_minutes % 1
  result = h_part + ((60 * m_part) / 100)
  return result


def hours_to_days(number_of_hours):
  how_many_days_in_hours = number_of_hours / 24
  d_part = how_many_days_in_hours // 1
  h_part = how_many_days_in_hours % 1
  result = d_part + ((24 * h_part) / 100)
  return round(result, 2)
  

def minutes_to_days(minutes):
  hours = minutes_to_hours(minutes)
  days = hours_to_days(hours)
  return days
