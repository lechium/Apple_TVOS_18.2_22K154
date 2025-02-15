//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPDeviceInfo : PBCodable
{
    NSMutableArray *_internalTestConfigs;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
    NSString *_processUuid;	// 24 = 0x18
    NSString *_processVersion;	// 32 = 0x20
    NSString *_productBuild;	// 40 = 0x28
    NSString *_productName;	// 48 = 0x30
    NSString *_productType;	// 56 = 0x38
    NSString *_productVersion;	// 64 = 0x40
    NSString *_userDefaultTestName;	// 72 = 0x48
    _Bool _isAppleInternal;	// 80 = 0x50
    struct {
        unsigned int isAppleInternal:1;
    } _has;	// 84 = 0x54
}

+ (Class)internalTestConfigType;	// IMP=0x0010000000038432
- (void).cxx_destruct;	// IMP=0x0000000000039aed
@property(retain, nonatomic) NSMutableArray *internalTestConfigs; // @synthesize internalTestConfigs=_internalTestConfigs;
@property(retain, nonatomic) NSString *userDefaultTestName; // @synthesize userDefaultTestName=_userDefaultTestName;
@property(retain, nonatomic) NSString *processUuid; // @synthesize processUuid=_processUuid;
@property(retain, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) _Bool isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003971a
- (unsigned long long)hash;	// IMP=0x00000000000395e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000393bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039091
- (void)copyTo:(id)arg1;	// IMP=0x0000000000038ead
- (void)writeTo:(id)arg1;	// IMP=0x0000000000038c69
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000038c5c
- (id)dictionaryRepresentation;	// IMP=0x00000000000384f2
- (id)description;	// IMP=0x0000000000038443
- (id)internalTestConfigAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000038415
- (unsigned long long)internalTestConfigsCount;	// IMP=0x00000000000383f8
- (void)addInternalTestConfig:(id)arg1;	// IMP=0x000000000003838e
- (void)clearInternalTestConfigs;	// IMP=0x0000000000038371
@property(readonly, nonatomic) _Bool hasUserDefaultTestName;
@property(readonly, nonatomic) _Bool hasProcessUuid;
@property(readonly, nonatomic) _Bool hasProcessVersion;
@property(readonly, nonatomic) _Bool hasProcessName;
@property(nonatomic) _Bool hasIsAppleInternal;
@property(readonly, nonatomic) _Bool hasProductBuild;
@property(readonly, nonatomic) _Bool hasProductVersion;
@property(readonly, nonatomic) _Bool hasProductType;
@property(readonly, nonatomic) _Bool hasProductName;

@end

