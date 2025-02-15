//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _TVRCRapportDeviceManager : NSObject
{
    NSMutableDictionary *_deviceImplMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000045d0b
@property(retain, nonatomic) NSMutableDictionary *deviceImplMap; // @synthesize deviceImplMap=_deviceImplMap;
- (void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)arg1 linkDevice:(id)arg2;	// IMP=0x0000000000045c04
- (id)_identifierForDevice:(id)arg1;	// IMP=0x0000000000045bef
- (id)description;	// IMP=0x0000000000045b49
- (_Bool)removeDeviceImplForLinkDevice:(id)arg1;	// IMP=0x00000000000456e5
- (_Bool)createOrUpdateDeviceImplForLinkDevice:(id)arg1;	// IMP=0x00000000000453a9
- (id)deviceImplForLinkDevice:(id)arg1;	// IMP=0x0000000000044fd6
- (id)init;	// IMP=0x0000000000044f80

@end

