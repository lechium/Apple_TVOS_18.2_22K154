//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCollaborationRemoveCollaboratorsResponse, NSString;

@interface ICCollaborationRemoveCollaboratorsResponseParserDelegate : NSObject
{
    ICCollaborationRemoveCollaboratorsResponse *_removeResponse;	// 8 = 0x8
    unsigned int _currentContainerDAAPCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000100cb9
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x0010000000100cb0
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x0010000000100c87
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x0010000000100c65
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x0010000000100c12
- (id)initWithResponse:(id)arg1;	// IMP=0x0010000000100bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

