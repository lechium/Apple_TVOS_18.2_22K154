//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFWebResource.h"

@class WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFFileWebResource : WFWebResource
{
    WFFileRepresentation *_file;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000087bd8
- (void).cxx_destruct;	// IMP=0x0000000000087bc5
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000087b19
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000087a8c
- (id)MIMEType;	// IMP=0x0000000000087a12
- (id)data;	// IMP=0x00000000000879c2
- (id)loadInWKWebView:(id)arg1;	// IMP=0x000000000008791e
- (id)initWithFile:(id)arg1;	// IMP=0x000000000008789d

@end

