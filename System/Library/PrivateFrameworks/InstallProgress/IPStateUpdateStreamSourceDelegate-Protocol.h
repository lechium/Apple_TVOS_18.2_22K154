//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallProgress/NSObject-Protocol.h>

@class IPStateUpdateMessage;
@protocol IPStateUpdateStreamSource;

@protocol IPStateUpdateStreamSourceDelegate <NSObject>
- (void)stateUpdateStreamSource:(id <IPStateUpdateStreamSource>)arg1 updateMessageReceived:(IPStateUpdateMessage *)arg2;
@end

