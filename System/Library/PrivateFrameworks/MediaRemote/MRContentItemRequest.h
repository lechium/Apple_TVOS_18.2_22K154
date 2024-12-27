//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRContentItem, MRPlaybackQueueRequest;

__attribute__((visibility("hidden")))
@interface MRContentItemRequest : NSObject
{
    MRContentItem *_item;	// 8 = 0x8
    MRPlaybackQueueRequest *_request;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000017d775
- (void).cxx_destruct;	// IMP=0x000000000017d7df
@property(retain, nonatomic) MRPlaybackQueueRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MRContentItem *item; // @synthesize item=_item;
- (id)description;	// IMP=0x000000000017d77d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017d6d1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017d323
- (id)initWithItem:(id)arg1 request:(id)arg2;	// IMP=0x000000000017d100

@end

