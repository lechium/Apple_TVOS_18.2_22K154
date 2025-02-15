//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TVSettingsTCCFacade : NSObject
{
    NSArray *_infoArray;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSDictionary *_infoByIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b380c
@property(readonly, nonatomic) NSDictionary *infoByIdentifier; // @synthesize infoByIdentifier=_infoByIdentifier;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) NSArray *infoArray; // @synthesize infoArray=_infoArray;
- (void)_updateTCCInfo;	// IMP=0x00100000000b36b2
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000b3651
- (id)fetchInfoMapping;	// IMP=0x00100000000b3351
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000b333f
- (_Bool)setAllowAccess:(_Bool)arg1 forInfo:(id)arg2;	// IMP=0x00100000000b330b
- (id)infoForIdentifier:(id)arg1;	// IMP=0x00100000000b32f5
- (void)dealloc;	// IMP=0x00100000000b3239
- (id)initWithServiceName:(id)arg1;	// IMP=0x00100000000b311a
- (id)init;	// IMP=0x00100000000b310c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

