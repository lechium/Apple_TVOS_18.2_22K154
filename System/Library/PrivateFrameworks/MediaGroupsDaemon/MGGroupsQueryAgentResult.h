//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroup, MGGroupsMediator;

__attribute__((visibility("hidden")))
@interface MGGroupsQueryAgentResult : NSObject
{
    MGGroup *_group;	// 8 = 0x8
    MGGroupsMediator *_mediator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017694
@property(readonly, nonatomic) __weak MGGroupsMediator *mediator; // @synthesize mediator=_mediator;
@property(readonly, nonatomic) MGGroup *group; // @synthesize group=_group;
- (id)initWithGroup:(id)arg1 mediator:(id)arg2;	// IMP=0x00000000000175b8

@end

