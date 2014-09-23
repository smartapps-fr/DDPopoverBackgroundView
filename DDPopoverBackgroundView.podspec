Pod::Spec.new do |s|
	s.name = 'DDPopoverBackgroundView'
	s.version = '1.0.2'
	s.license = { :type => 'MIT', :file => 'LICENSE' }
	s.author = { 'Damien Debin' => 'damien.debin@gmail.com' }
	s.homepage = 'https://github.com/ddebin/DDPopoverBackgroundView'
	s.summary = "DDPopoverBackgroundView is a single-file iOS 5+ class to help customizing UIPopoverController popovers."
	s.source = { :git => 'https://github.com/ddebin/DDPopoverBackgroundView.git', :tag => s.version.to_s }
	s.source_files = '*{.h,.m}'
	s.platform = :ios, '5.0'
	s.requires_arc = false
end
