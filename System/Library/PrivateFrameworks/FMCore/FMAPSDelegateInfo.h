//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FMAPSDelegate;

__attribute__((visibility("hidden")))
@interface FMAPSDelegateInfo : NSObject
{
    NSString *_topic;	// 8 = 0x8
    id <FMAPSDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008b40
@property(nonatomic) __weak id <FMAPSDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;

@end

