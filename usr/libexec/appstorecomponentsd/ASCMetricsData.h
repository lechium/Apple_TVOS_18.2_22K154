//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface ASCMetricsData : NSObject
{
    _Bool _shouldFlush;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    NSDictionary *_fields;	// 24 = 0x18
    NSSet *_includingFields;	// 32 = 0x20
    NSSet *_excludingFields;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001cf14
- (void).cxx_destruct;	// IMP=0x002000000001d998
@property(readonly, copy, nonatomic) NSSet *excludingFields; // @synthesize excludingFields=_excludingFields;
@property(readonly, copy, nonatomic) NSSet *includingFields; // @synthesize includingFields=_includingFields;
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) _Bool shouldFlush; // @synthesize shouldFlush=_shouldFlush;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)metricsDataByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d818
- (id)description;	// IMP=0x001000000001d6ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001d3b3
- (unsigned long long)hash;	// IMP=0x001000000001d28b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001d280
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001d144
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001cf1c
- (id)initWithTopic:(id)arg1 shouldFlush:(_Bool)arg2 fields:(id)arg3 includingFields:(id)arg4 excludingFields:(id)arg5;	// IMP=0x001000000001cdf4

@end

