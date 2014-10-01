//
//  SimpleTableCell.h
//  ClaseTableView
//
//  Created by Mac30 on 01/10/14.
//  Copyright (c) 2014 Mac16. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
