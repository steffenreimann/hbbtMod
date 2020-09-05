upSplitter = component.proxy('6DAC6E2244628E7E711C8D9450245C20')


print(upSplitter:switchMode(1))


print(upSplitter:getInputItem())



upSplitter:addAutoOutputItem('testArray1', 0)
print('Array 1')
print(upSplitter:getAutoOutput(true, 0, 0))


upSplitter:addAutoOutputItem('testArray2', 1)
print('Array 2')
print(upSplitter:getAutoOutput(true, 1, 0))