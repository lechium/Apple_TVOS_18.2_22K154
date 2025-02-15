//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSString;

@interface BMStreamCRDTLocation : NSObject
{
    NSDateFormatter *_dateFormatter;	// 8 = 0x8
    NSString *_streamName;	// 16 = 0x10
    NSString *_siteIdentifier;	// 24 = 0x18
    NSDate *_day;	// 32 = 0x20
}

+ (id)dayFromRecordName:(id)arg1;	// IMP=0x0040000000048eb2
+ (id)recordNameFromSite:(id)arg1 day:(id)arg2;	// IMP=0x0010000000048b96
- (void).cxx_destruct;	// IMP=0x00200000000496da
@property(readonly, nonatomic) NSDate *day; // @synthesize day=_day;
@property(readonly, nonatomic) NSString *siteIdentifier; // @synthesize siteIdentifier=_siteIdentifier;
@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
- (double)secondsUntilExpirationWithStreamConfiguration:(id)arg1;	// IMP=0x00100000000495b8
- (id)ckMergeableValueIDWithFormatVersion:(unsigned long long)arg1;	// IMP=0x001000000004936f
- (id)ckMergeableValueID;	// IMP=0x001000000004935b
- (id)initWithCKMergeableValueID:(id)arg1 streamName:(id)arg2;	// IMP=0x001000000004903b
- (id)initWithCKMergeableValueID:(id)arg1;	// IMP=0x0010000000049027
- (id)initWithZoneName:(id)arg1 recordName:(id)arg2;	// IMP=0x0010000000048f87
- (id)initWithTriple:(id)arg1;	// IMP=0x0010000000048cb8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000048cad
- (id)recordName;	// IMP=0x0010000000048c89
- (id)triple;	// IMP=0x0010000000048abc
- (id)description;	// IMP=0x0010000000048a74
- (unsigned long long)hash;	// IMP=0x0010000000048a1c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000048907
- (id)initWithStreamName:(id)arg1 siteIdentifier:(id)arg2 day:(id)arg3;	// IMP=0x001000000004876a
- (id)dictionaryRepresentation;	// IMP=0x001000000003ce68
- (id)initFromDictionary:(id)arg1;	// IMP=0x001000000003cd9c

@end

