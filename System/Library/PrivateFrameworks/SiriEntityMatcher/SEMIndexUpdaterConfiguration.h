//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCSetChangeRegistry;

@interface SEMIndexUpdaterConfiguration : NSObject
{
    Class _updaterClass;	// 8 = 0x8
    CCSetChangeRegistry *_changeRegistry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000036e44
@property(retain, nonatomic) CCSetChangeRegistry *changeRegistry; // @synthesize changeRegistry=_changeRegistry;
@property(retain, nonatomic) Class updaterClass; // @synthesize updaterClass=_updaterClass;

@end

