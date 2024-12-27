//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface UIFocusRingClientState : NSObject
{
    id <UIFocusItem> _currentFocusItem;	// 8 = 0x8
    NSMutableArray *_activeFocusLayers;	// 16 = 0x10
    NSMapTable *_activeFocusLayersToItems;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000fbaf04
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSMapTable *activeFocusLayersToItems; // @synthesize activeFocusLayersToItems=_activeFocusLayersToItems;
@property(retain, nonatomic) NSMutableArray *activeFocusLayers; // @synthesize activeFocusLayers=_activeFocusLayers;
@property(nonatomic) __weak id <UIFocusItem> currentFocusItem; // @synthesize currentFocusItem=_currentFocusItem;
- (id)description;	// IMP=0x0000000000fbadc0
- (id)initWithClientID:(id)arg1;	// IMP=0x0000000000fbad56

@end

