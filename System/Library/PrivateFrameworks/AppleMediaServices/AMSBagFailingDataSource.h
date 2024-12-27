//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSDate, NSError, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFailingDataSource : NSObject
{
    NSDate *_expirationDate;	// 8 = 0x8
    NSString *_profile;	// 16 = 0x10
    NSString *_profileVersion;	// 24 = 0x18
    AMSProcessInfo *processInfo;	// 32 = 0x20
    double _delay;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000044be82
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo;
@property(copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000044be05
- (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000044bdfd
- (void)valueForURLVariable:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000044bded
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;	// IMP=0x000000000044bde5
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000044bbee
@property(readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 error:(id)arg3 delay:(double)arg4;	// IMP=0x000000000044badc

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *descriptionExtended;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

