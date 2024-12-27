//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVUnifiedPlayerContextMenuRepresentation, NSIndexPath;
@protocol AVUnifiedPlayerContextMenuItem, AVUnifiedPlayerContextMenuSection;

@protocol AVUnifiedPlayerContextMenuRepresentationDelegate <NSObject>
- (void)representation:(AVUnifiedPlayerContextMenuRepresentation *)arg1 didUpdateItem:(id <AVUnifiedPlayerContextMenuItem>)arg2 inSection:(id <AVUnifiedPlayerContextMenuSection>)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)representation:(AVUnifiedPlayerContextMenuRepresentation *)arg1 didUpdateSection:(id <AVUnifiedPlayerContextMenuSection>)arg2 atIndex:(unsigned long long)arg3;
@end

