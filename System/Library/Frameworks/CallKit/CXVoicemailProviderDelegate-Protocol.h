//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXAbstractProviderDelegate-Protocol.h>

@class CXRemoveVoicemailAction, CXSetPlayedVoicemailAction, CXSetTrashedVoicemailAction, CXVoicemailProvider;

@protocol CXVoicemailProviderDelegate <CXAbstractProviderDelegate>

@optional
- (void)provider:(CXVoicemailProvider *)arg1 performRemoveVoicemailAction:(CXRemoveVoicemailAction *)arg2;
- (void)provider:(CXVoicemailProvider *)arg1 performSetTrashedVoicemailAction:(CXSetTrashedVoicemailAction *)arg2;
- (void)provider:(CXVoicemailProvider *)arg1 performSetPlayedVoicemailAction:(CXSetPlayedVoicemailAction *)arg2;
@end

