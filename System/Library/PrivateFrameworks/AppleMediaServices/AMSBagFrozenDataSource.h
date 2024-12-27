//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSource : NSObject
{
    NSDate *_expirationDate;	// 8 = 0x8
    AMSProcessInfo *_processInfo;	// 16 = 0x10
    NSString *_profile;	// 24 = 0x18
    NSString *_profileVersion;	// 32 = 0x20
    NSDictionary *_data;	// 40 = 0x28
    NSDictionary *_defaultValues;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002fc9ca
- (void).cxx_destruct;	// IMP=0x00000000002fca0e
@property(readonly, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fc6e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002fc52b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fc430
- (void)valueForURLVariable:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fc358
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002fc352
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;	// IMP=0x00000000002fc284
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002fc18e
- (id)defaultValueForKey:(id)arg1;	// IMP=0x00000000002fc063
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 processInfo:(id)arg5 defaultValues:(id)arg6;	// IMP=0x00000000002fbe11

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

@property(retain, nonatomic) NSString *descriptionExtended;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

