//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKObjectID, NSString;

__attribute__((visibility("hidden")))
@interface EKImageKey : NSObject
{
    EKObjectID *_sourceID;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005f421
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) EKObjectID *sourceID; // @synthesize sourceID=_sourceID;
- (unsigned long long)hash;	// IMP=0x000000000005f3ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f332
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f327
- (id)initWithSourceID:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000005f28e

@end

