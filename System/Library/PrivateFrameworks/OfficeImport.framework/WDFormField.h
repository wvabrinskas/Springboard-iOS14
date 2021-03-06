/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	BOOL mLinkAbsolute;
	BOOL mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(id)namedLocation;
-(void)setURI:(id)arg1 ;
-(id)description;
-(id)URI;
-(unsigned)position;
-(void)setPosition:(unsigned)arg1 ;
-(void)setNamedLocation:(id)arg1 ;
-(int)runType;
-(id)macName;
-(id)dosName;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)linkAbsolute;
-(void)setLinkAbsolute:(BOOL)arg1 ;
-(BOOL)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg1 ;
-(void)setMacName:(id)arg1 ;
-(void)setDosName:(id)arg1 ;
@end

