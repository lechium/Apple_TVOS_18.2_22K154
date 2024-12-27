//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoardServices/NSObject-Protocol.h>

@protocol BSXPCDecoding, BSXPCEncoding;

@protocol BSXPCSecureCoding <NSObject>
+ (_Bool)supportsBSXPCSecureCoding;
- (id)initWithBSXPCCoder:(id <BSXPCDecoding>)arg1;
- (void)encodeWithBSXPCCoder:(id <BSXPCEncoding>)arg1;
@end

