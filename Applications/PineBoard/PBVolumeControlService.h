//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSExternalControlFeature, PBSExternalControlSystem;

@interface PBVolumeControlService : NSObject
{
    PBSExternalControlSystem *_controlSystem;	// 8 = 0x8
    PBSExternalControlFeature *_volumeFeature;	// 16 = 0x10
    PBSExternalControlFeature *_muteFeature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a106d
@property(retain, nonatomic) PBSExternalControlFeature *muteFeature; // @synthesize muteFeature=_muteFeature;
@property(retain, nonatomic) PBSExternalControlFeature *volumeFeature; // @synthesize volumeFeature=_volumeFeature;
@property(retain, nonatomic) PBSExternalControlSystem *controlSystem; // @synthesize controlSystem=_controlSystem;
- (float)_absoluteVolumeLevelWithStep:(id)arg1;	// IMP=0x00100000000a0e29
- (void)setIsMuted:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a0c58
- (void)adjustRelativeVolumeLevel:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a08fd
- (void)setAbsoluteVolumeLevel:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a07a9
- (id)absoluteVolumeLevel;	// IMP=0x00100000000a06b0
- (id)volumeControlCapabilities;	// IMP=0x00100000000a0328
- (id)init;	// IMP=0x00100000000a0259

@end

