/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLExtensionPreview : NSObject <NSSecureCoding> {

	NSString* _previewDescription;

}

@property (copy) NSString * previewDescription;              //@synthesize previewDescription=_previewDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(NSString *)previewDescription;
-(void)setPreviewDescription:(NSString *)arg1 ;
@end

