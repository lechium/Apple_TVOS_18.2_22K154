//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults
{
    PKHostPlugIn *_plugin;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001fe50
@property __weak PKHostPlugIn *plugin; // @synthesize plugin=_plugin;
- (void)registerDefaults:(id)arg1;	// IMP=0x000000000001fe00
- (_Bool)synchronize;	// IMP=0x000000000001fdf0
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001fce0
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001faf0
- (id)initWithPlugIn:(id)arg1;	// IMP=0x000000000001fa80

@end

