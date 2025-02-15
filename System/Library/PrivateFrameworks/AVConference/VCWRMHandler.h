//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCWRMHandler : NSObject
{
    int _localWRMLinkTypeSuggestion;	// 8 = 0x8
    int _remoteWRMLinkTypeSuggestion;	// 12 = 0xc
    _Bool _isRemoteDuplicating;	// 16 = 0x10
    double _localLinkTypeSuggestionChangeTime;	// 24 = 0x18
    double _lastConnectionUnstableTime;	// 32 = 0x20
    double _WRMNotificationRequestTime;	// 40 = 0x28
}

@property double localLinkTypeSuggestionChangeTime; // @synthesize localLinkTypeSuggestionChangeTime=_localLinkTypeSuggestionChangeTime;
@property(readonly) _Bool isRemoteDuplicating; // @synthesize isRemoteDuplicating=_isRemoteDuplicating;
@property(readonly) int remoteWRMLinkTypeSuggestion; // @synthesize remoteWRMLinkTypeSuggestion=_remoteWRMLinkTypeSuggestion;
@property(readonly) int localWRMLinkTypeSuggestion; // @synthesize localWRMLinkTypeSuggestion=_localWRMLinkTypeSuggestion;
- (unsigned char)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(_Bool)arg2;	// IMP=0x0000000000173767
- (id)init;	// IMP=0x0000000000172fb4

@end

