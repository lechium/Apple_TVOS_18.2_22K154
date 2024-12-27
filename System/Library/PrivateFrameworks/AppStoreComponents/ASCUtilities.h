//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCPendingPromises;
@protocol ASCServices;

__attribute__((visibility("hidden")))
@interface ASCUtilities : NSObject
{
    id <ASCServices> _connection;	// 8 = 0x8
    ASCPendingPromises *_pendingPromises;	// 16 = 0x10
}

+ (void)withSharedUtilities:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x0040000000055e05
+ (id)shared;	// IMP=0x0040000000055bb2
- (void).cxx_destruct;	// IMP=0x0000000000056588
@property(readonly, nonatomic) ASCPendingPromises *pendingPromises; // @synthesize pendingPromises=_pendingPromises;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
- (id)restoreAppStore;	// IMP=0x00000000000562b7
- (id)openURL:(id)arg1;	// IMP=0x0000000000055fbc
- (void)daemonConnectionWasLost:(id)arg1;	// IMP=0x0000000000055ec2
- (void)dealloc;	// IMP=0x0000000000055d90
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000055c6c

@end

