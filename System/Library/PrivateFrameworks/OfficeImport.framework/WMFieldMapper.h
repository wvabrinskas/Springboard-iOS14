/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/WMParagraphMapper.h>

@class NSMutableString, NSString;

@interface WMFieldMapper : WMParagraphMapper {

	int mMode;
	unsigned mType;
	NSMutableString* mMarkerText;
	NSString* mLink;

}
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
@end
