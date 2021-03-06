/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;

}
-(id)columnName;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(unsigned)fetchIndex;
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2 ;
-(void)setAllowAliasing:(BOOL)arg1 ;
-(id)initForReadOnlyFetching;
-(id)description;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(BOOL)allowAliasing;
-(unsigned)slot;
-(id)cloneForReadOnlyFetching;
-(unsigned)roughSizeEstimate;
-(void)_setSQLType:(unsigned char)arg1 ;
-(void)_setColumnName:(id)arg1 ;
-(unsigned char)sqlType;
-(void)dealloc;
@end

