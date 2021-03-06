/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDWorkbook, EDResources, NSMutableArray;

@interface EDProcessor : NSObject {

	EDWorkbook* mWorkbook;
	EDResources* mResources;
	NSMutableArray* mObjects;

}
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)markObjectForPostProcessing:(id)arg1 ;
-(void)applyProcessorWithSheet:(id)arg1 ;
@end

