//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteTextInput/NSObject-Protocol.h>

@class RTIDataPayload, RTIDocumentRequest;

@protocol RTIInputSystemPayloadDelegate <NSObject>
- (void)handleTextActionPayload:(RTIDataPayload *)arg1;

@optional
- (void)performDocumentRequest:(RTIDocumentRequest *)arg1 completion:(void (^)(RTIDocumentState *))arg2;
@end

