//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/NSObject-Protocol.h>

@class NSArray, NSError, NSExtension;
@protocol NSCopying;

@protocol TVSExtensionRequestOberver <NSObject>
- (void)tvs_extension:(NSExtension *)arg1 requestInterrupted:(id <NSCopying>)arg2;
- (void)tvs_extension:(NSExtension *)arg1 request:(id <NSCopying>)arg2 didCancelWithError:(NSError *)arg3;
- (void)tvs_extension:(NSExtension *)arg1 request:(id <NSCopying>)arg2 didCompleteWithItems:(NSArray *)arg3;
@end

