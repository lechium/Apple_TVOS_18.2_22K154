//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ATAudioSessionUtils : NSObject
{
}

+ (id)getPort:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x008000000003f634
+ (id)getPorts:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x008000000003f41f
+ (id)getRouteStringFromAVASRouteDescription:(id)arg1;	// IMP=0x008000000003f14e
+ (id)getRouteDescriptionFromAVASRouteDescription:(id)arg1;	// IMP=0x008000000003efd4
+ (id)outputPortTypes;	// IMP=0x008000000003ebe1
+ (id)inputPortTypes;	// IMP=0x008000000003e98c
+ (id)modes;	// IMP=0x008000000003e486
+ (id)categories;	// IMP=0x008000000003e16b
+ (id)KVOProperties;	// IMP=0x008000000003e15e
+ (id)getMappedObjectOf:(id)arg1 inside:(id)arg2 ofType:(int)arg3;	// IMP=0x008000000003df24
+ (struct __CFString *)getAudioSessionPortType:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x008000000003de32
+ (unsigned int)getAudioSessionMode:(id)arg1;	// IMP=0x008000000003dd68
+ (id)getAVASMode:(unsigned int)arg1;	// IMP=0x008000000003dcb3
+ (unsigned int)getAudioSessionCategory:(id)arg1;	// IMP=0x008000000003dbe9
+ (id)getAVASCategory:(unsigned int)arg1;	// IMP=0x008000000003db34
+ (unsigned int)getAudioSessionProperty:(id)arg1;	// IMP=0x008000000003da6a
+ (id)getAVASProperty:(unsigned int)arg1;	// IMP=0x008000000003d9b5
+ (unsigned long long)getCategoryOptionFromPropertyID:(unsigned int)arg1;	// IMP=0x008000000003d8a8

@end

