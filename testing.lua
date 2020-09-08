upSplitter = component.proxy('6DAC6E2244628E7E711C8D9450245C20')


print(upSplitter:switchMode(1))


print(upSplitter:getInputItem())



upSplitter:addAutoOutputItem('testArray1', 0)
print('Array 1')
print(upSplitter:getAutoOutput(true, 0, 0))


upSplitter:addAutoOutputItem('testArray2', 1)
print('Array 2')
print(upSplitter:getAutoOutput(true, 1, 0))

speaker = component.proxy('6DAC6E2244628E7E711C8D9450245C20')

print('Volume')
print(speaker:getVolume())
print('Range')
print(speaker:getRange())


print('set Volume')
print(speaker:setVolume(1))
print('set Range')
print(speaker:setRange(1))

playSound('testing', 0)




speaker = component.proxy('BF5235264354E9825382BEA89C93AD54')

print('Volume')
print(speaker:getVolume())
print('Range')
print(speaker:getRange())


print('set Volume')
speaker:setVolume(1)
print('set Range')
speaker:setRange(100000)

speaker:playSound('1111',0)



speaker1 = component.proxy('BF5235264354E9825382BEA89C93AD54')
speaker2 = component.proxy('A8B5685D4BD19C3E50FF028FD16F50F1')


function repeatingSound(components, file, startTime, duration)
    local methods =  {}
    methods.playing = true

    local function methods.play(components, file, startTime, duration)
        start = computer.millis()
        for _,component in pairs(components) do 
            component:playSound(file,startTime)
        end
        while methods.playing do
            event.ignoreAll()
            for _,component in pairs(components) do 
                event.listen(component)
            end
            name, type, stat, idk = event.pull()
        
            if stat>1 then 
                play(components, file,startTime)
            elseif stat == 1 then
                return 1
            elseif duration ~= nil and now - start >= duration then
                stop(components)
                return 2
            end
        end
    end

    local function methods.stop(components)
        for _,component in pairs(components) do 
            component:stopSound()
            methods.playing = false
        end
    end
    return methods
end

repeatingSound.play({speaker1, speaker2} ,'1111', 0, 20000)







--[[

function repeatingSound(component,file, startTime)
    
    component:playSound(file,startTime)

    while true do
        event.ignoreAll()
        event.listen(speaker)

        name, type, stat, idk = event.pull()

        print(stat)

        if stat>1 then 
            component:playSound(file, startTime)
        elseif stat == 1 then
            return 'Stopping by Function'
        end

    end

end

repeatingSound(speaker,'1111', 0)


speaker:playSound('1111',0)

while true do
 event.ignoreAll()
 event.listen(speaker)

name, type, stat, idn = event.pull()

print(stat)

 if stat>1 then 
  speaker:playSound('1111',0)
 end

end



upSplitter = component.proxy('DB67FC484B37CC863129BF89B778B9E9')

upSplitter:switchMode(1)

print(upSplitter:printTest('Hallo',true,true,5))



FilterItems, index, desc, msg = upSplitter:addOutputFilter('Desc_IronPlate_C', 0)

print('Index: '..index..' // Desc: '..desc..' // Msg: '..msg)

print(upSplitter:getAllOutputs())


FilterItems, index, desc, msg = upSplitter:clearOutputFilter(true, 0, 0)
print('Index'..index..'// '..' // '..desc..' // '..msg)









print(upSplitter:getInputItem())

multiSplitter:setTransform(500,600,100)
print(multiSplitter:testTransform())

print(multiSplitter:spawnActor(800,800,0))


print(upSplitter:switchMode(1))
print(upSplitter:getInputItem())


print(upSplitter:getAllOutputs())


print('Array 1')
print(upSplitter:addOutputFilter('test', 0))
FilterItems, index, desc, msg = upSplitter:addOutputFilter('test', 0)

print('Index: '..index..'// Items: '..FilterItems..' // Desc: '..desc..' // Msg: '..msg)



print('Array 2')

print(upSplitter:getAllOutputs())













print(upSplitter:addAutoOutputItem('lost', 0))

// ItemName , OutputIndex
upSplitter:addAutoOutputItem('test', 0)


// All? , OutputIndex , ArrayIndex
upSplitter:getAutoOutput(true, 0, 0)


// All? , OutputIndex , ArrayIndex
upSplitter:clearAutoOutput(true, 0,0)



print(upSplitter:testFunction('ping'))

mode, dev = upSplitter:switchMode(0)
print(mode)
print(dev)
print(type(mode))



for _,m in pairs(upSplitter:getMembers()) do 
   print(m)
end
--]]