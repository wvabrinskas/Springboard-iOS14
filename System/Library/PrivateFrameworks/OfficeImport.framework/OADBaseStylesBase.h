/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OADColorScheme, OADStyleMatrix, OADFontScheme;

@interface OADBaseStylesBase : NSObject {

	OADColorScheme* mColorScheme;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;

}

@property (nonatomic,retain) OADColorScheme * colorScheme; 
@property (nonatomic,retain) OADStyleMatrix * styleMatrix; 
@property (nonatomic,retain) OADFontScheme * fontScheme; 
-(id)description;
-(OADColorScheme *)colorScheme;
-(void)setColorScheme:(OADColorScheme *)arg1 ;
-(OADStyleMatrix *)styleMatrix;
-(OADFontScheme *)fontScheme;
-(void)setStyleMatrix:(OADStyleMatrix *)arg1 ;
-(void)setFontScheme:(OADFontScheme *)arg1 ;
@end

