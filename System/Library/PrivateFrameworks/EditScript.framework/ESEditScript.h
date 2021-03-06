/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ESEditScriptData;
@class ESIntArray2D, NSArray, NSMutableArray;

@interface ESEditScript : NSObject {

	BOOL _orderAtomsAscending;
	ESIntArray2D* _distanceMatrix;
	long long _currentOperation;
	id<ESEditScriptData> _itemAData;
	id<ESEditScriptData> _itemBData;
	NSArray* _operationPrecedenceArray;
	NSMutableArray* _script;

}

@property (nonatomic,copy) NSArray * operationPrecedenceArray;              //@synthesize operationPrecedenceArray=_operationPrecedenceArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * script;                       //@synthesize script=_script - In the implementation block
-(NSMutableArray *)script;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(id)description;
-(void)setScript:(NSMutableArray *)arg1 ;
-(id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1 ;
-(void)initializeCurrentScriptAtom;
-(void)finalizeCurrentScriptAtom;
-(id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(BOOL)arg2 ;
-(void)computeDistanceMatrix;
-(void)computeEditsFromMatrix;
-(NSArray *)operationPrecedenceArray;
-(void)setOperationPrecedenceArray:(NSArray *)arg1 ;
@end

