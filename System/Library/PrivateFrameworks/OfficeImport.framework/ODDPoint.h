/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ODDPointPropertySet, OADShapeProperties, OADTextBody;

@interface ODDPoint : NSObject {

	int mType;
	ODDPointPropertySet* mPropertySet;
	OADShapeProperties* mShapeProperties;
	OADTextBody* mText;

}
+(void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id*)arg3 ;
-(void)setText:(id)arg1 ;
-(id)init;
-(id)text;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(id)shapeProperties;
-(id)propertySet;
@end
