//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, NWBrowser;

__attribute__((visibility("hidden")))
@interface NWRemoteBrowserWrapper : NSObject
{
    NSUUID *_clientID;	// 8 = 0x8
    NWBrowser *_browser;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007cd2c0
@property(retain) NWBrowser *browser; // @synthesize browser=_browser;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;

@end

