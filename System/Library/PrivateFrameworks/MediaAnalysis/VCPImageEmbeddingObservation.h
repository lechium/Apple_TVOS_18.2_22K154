//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface VCPImageEmbeddingObservation : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    NSArray *_shape;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000305dfd
@property(retain, nonatomic) NSArray *shape; // @synthesize shape=_shape;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;

@end

