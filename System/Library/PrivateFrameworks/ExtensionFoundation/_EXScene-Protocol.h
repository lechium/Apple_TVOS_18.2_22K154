//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/NSObject-Protocol.h>

@class NSXPCConnection, _EXSceneSession;

@protocol _EXScene <NSObject>

@optional
@property(retain) id delegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,&

- (void)connectToSession:(_EXSceneSession *)arg1;
- (_Bool)shouldAcceptConnection:(NSXPCConnection *)arg1;
@end

