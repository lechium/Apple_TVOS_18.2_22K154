//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebArchiveResourceFromNSAttributedString : NSObject
{
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> resource;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000683ed0
- (void).cxx_destruct;	// IMP=0x0000000000683ea0
- (id)URL;	// IMP=0x0000000000683e80
- (id)MIMEType;	// IMP=0x0000000000683e50
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;	// IMP=0x0000000000683830

@end

