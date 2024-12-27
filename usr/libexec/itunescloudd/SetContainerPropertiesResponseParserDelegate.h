//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SetContainerPropertiesResponseParserDelegate : NSObject
{
    _Bool _updateRequired;	// 8 = 0x8
    NSString *_globalPlaylistID;	// 16 = 0x10
    NSString *_subscribedContainerURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000056c28
@property(retain, nonatomic) NSString *subscribedContainerURL; // @synthesize subscribedContainerURL=_subscribedContainerURL;
@property(retain, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
@property(nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x0010000000056b15
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x0000000000056af3
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x0010000000056aaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

